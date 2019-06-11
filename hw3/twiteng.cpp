#include <string>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "twiteng.h"
#include "user.h"
#include "tweet.h"
#include "util.h"

using namespace std;

TwitEng::TwitEng(){

}

bool TwitEng::parse(char* filename){
	ifstream ifile;
	ifile.open(filename);
	if(ifile.fail()){
		return false;
	}
	string line;
	int lineNumber = 0;
	int numUsers = 0;
	string word;
	string username;
	while(getline(ifile, line)){
		if(lineNumber == 0){
			numUsers = std::stoi(line);
		}else if(lineNumber<=numUsers && lineNumber >0){
			stringstream ss(line);
			ss >> username;
			User* u = new User(username);
			while(ss >> word){
				User* v = new User(word);
				u->addFollowing(v);
			}
			users.insert(u);
		}else{
			stringstream ss(line);
			
			
			string year;
			string month;
			string day;
			
			getline(ss, year, '-');
			getline(ss, month, '-');
			getline(ss, day, '-');
			
			string hour;
			string minute;
			string second;
			getline(ss, hour, ':');
			getline(ss, minute, ':');
			getline(ss, second, ':');

			int newYear = stoi(year);
			int newMonth = stoi(month);
			int newDay = stoi(day);
			int newHour = stoi(hour);
			int newMin = stoi(minute);
			int newSec = stoi(second);
			DateTime* d = new DateTime(newHour, newMin, newSec, newYear, newMonth, newDay);
			
			ss >> word;
			User* u = new User(word);
			string word3 = "";
			Tweet* t = new Tweet(u, *d, word3);
			string word2;
			while(ss>> word2){
				
				word3 = word3 + word2;
				if(word2.at(0) == '#'){
					convUpper(word2);
					t->setHashTag(word2);
					map<string, vector<Tweet*> >::iterator itr = hashtags.find(word2);
					if(itr != hashtags.end()){
						hashtags[word2].push_back(t);
					}else{
						vector<Tweet*> temp;
						temp.push_back(t);
						hashtags.insert(make_pair(itr->first, temp));
					}
				}
			}
			t->setText(word3);
			allTweets.insert(t);
		} 
		lineNumber++;
	}
	
	return true;
}

void TwitEng::addTweet(const std::string& username, const DateTime& time, const std::string& text){
	
	bool userExists = false;
	for(set<User*>::iterator itr=users.begin(); itr != users.end(); ++itr){
		
		if((*itr)->name() == username){
			Tweet *t = new Tweet(*itr , time, text);
			(*itr)->addTweet(t);
			userExists = true;
		}
	}
	if(userExists ==false){
		User* u = new User(username);
		Tweet *t = new Tweet(u, time, text);
		u->addTweet(t);
	}

 }

 vector<Tweet*> TwitEng::search(vector<string>& terms, int strategy){
 	/*
 	for(set<User*>::iterator itr = users.begin(); itr != users.end(); ++itr){
 		for(list<Tweet*>::iterator it = (*itr)->tweets().begin; it != (*itr)->tweets().end; ++it){
 			stringstream ss(*it);
 			string word;
 			while(ss >> word){
 				if(word.at(0) == '#'){
 					word.toupper();
 					map<string, vector<Tweet*>>::iterator iter = hashtags.find(word);
 					if(iter != hashtags.end()){

 					}else{
 						hashtags.insert(make_pair(word,*it));
 					}
 				}
 			}
 		}
 	}
 	*/
 	vector<Tweet*> combo;
 	if(strategy == 0){
 		/*
 		int counter = 0;
 		for(vector<string>::iterator itr = terms.begin(); itr != terms.end(); ++itr){
 			map<string, vector<Tweet*>>::iterator it = hashtags.find(*itr);
 			if(it != hashtags.end()){
 				counter++;
 				if(counter == 1){
 					combo.insert(combo.end(), it->second.begin(), it->second.end());
 				}else{

 				}	
 			}
 		}*/
 		for(set<Tweet*>::iterator itr = allTweets.begin(); itr != allTweets.end(); ++itr){
 			int counter = 0;
 			for(vector<string>::iterator it = terms.begin(); it != terms.end(); ++it){
 				set<string>::iterator iter = (*itr)->hashTags().find(*it);
 				if(iter != (*itr)->hashTags().end()){
 					counter++;
 				}
 			}
 			if(counter == (int)terms.size()){
 				combo.push_back(*itr);
 			}
 		}
 	

 	}
 	if(strategy == 1){
 		/*
 		for(vector<string>::iterator itr = terms.begin(); itr != terms.end(); ++itr){
 			map<string, vector<Tweet*>>::iterator it = hashtags.find(*itr);
 			if(it != hashtags.end()){
 				combo.insert(combo.end(), it->second.begin(), it->second.end());
 			}
 		}
 		return hashtags;
 		*/
 		for(set<Tweet*>::iterator itr = allTweets.begin(); itr != allTweets.end(); ++itr){
 			for(vector<string>::iterator it = terms.begin(); it != terms.end(); ++it){
 				set<string>::iterator iter = (*itr)->hashTags().find(*it);
 				if(iter != (*itr)->hashTags().end()){
 					combo.push_back(*itr);
 				}
 			}
 		}
 	}
 	return combo;
 
 }

 void TwitEng::dumpFeeds(){
 	for(set<User*>::iterator it=users.begin(); it != users.end(); ++it){
		ofstream ofile;
		string outputName = (*it)->name();
		outputName += ".feed";
		ofile.open(outputName);
		ofile << (*it)->name()<< endl;
		list<Tweet*> userTweets = (*it)->tweets();
		for(list<Tweet*>::iterator itr= userTweets.begin(); itr!= userTweets.end(); ++itr){
			ofile << *itr << endl;
		}
	}
 }