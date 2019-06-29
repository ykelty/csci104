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
#include "datetime.h"


using namespace std;

TwitEng::TwitEng(){

}

TwitEng::~TwitEng()
{

}
bool TwitEng::parse(char* filename){
	
	
	ifstream ifile;
	ifile.open(filename);
	if(ifile.fail()){
		return true;
	}
	string line;
	int lineNumber = 0;
	int numUsers = 0;
	string word;
	string username;
	while(getline(ifile, line)){
		if(lineNumber == 0){
			stringstream ss1(line);
			ss1 >> numUsers;
		}else if(lineNumber<=numUsers){

			//cout << numUsers << line;
			stringstream ss(line);
			ss >> username;
			bool userExists = false;


			for(set<User*>::iterator itr = users.begin(); itr != users.end(); ++itr){

				//if user exists
				if((*itr)->name() == username){
					userExists = true;
					User* u = *itr;

					//iterate through followers
					while(ss>>word){
						bool uExists = false;
						for(set<User*>::iterator it = users.begin(); it != users.end(); ++it){

							//if follower is already a user
							if((*it)->name() == word){
								uExists = true;
								User *v = *it;
								u->addFollowing(v);
								v->addFollower(u);
							}
						}

						//if follower is not already a user
						if(!uExists){
							User *v = new User(word);
							users.insert(v);
							u->addFollowing(v);
							v->addFollower(u);
						}
					}
				}
			}

			//if user does not exist
			if(!userExists){
				User *u = new User(username);
				users.insert(u);
				while(ss>>word){
					bool uExists = false;
					for(set<User*>::iterator it = users.begin(); it != users.end(); ++it){
						if((*it)->name() == word){
							uExists = true;
							User *v = *it;
							u->addFollowing(v);
							v->addFollower(u);
						}
					}
					if(!uExists){
						User *v = new User(word);
						users.insert(v);
						u->addFollowing(v);
						v->addFollower(u);
					}
				}
			}
			/*
			while(ss >> word){
				bool uExists = false;
				for(set<User*>::iterator itr = users.begin(); itr != users.end(); ++itr){
					if((*itr)->name() == word){
						uExists = true;
						User *v = *itr;
					}
				}
				if(!uExists){
					User *v = new User(username);
					users.insert(v);
					u->addFollowing(v);
					v->addFollower(u);
				}

				u->addFollowing(v);
				v->addFollower(u);

			}
			*/

		}else{
			stringstream ss(line);
			//cout << line << endl;
			
			string year;
			string month;
			string day;
			
			getline(ss, year, '-');
			//cout << "year:" << endl;
			getline(ss, month, '-');
			getline(ss, day, ' ');
			
			string hour;
			string minute;
			string second;
			getline(ss, hour, ':');
			getline(ss, minute, ':');
			getline(ss, second, ':');
			
			int newYear;
			int newMonth;
			int newDay;
			int newHour;
			int newMin;
			int newSec;

			
			stringstream ss2(year);
			ss2 >> newYear;
			stringstream ss3(month);
			ss3 >> newMonth;
			stringstream ss4(day);
			ss4 >> newDay;
			stringstream ss5(hour);
			ss5 >> newHour;
			stringstream ss6(minute);
			ss6 >> newMin;
			stringstream ss7(second);
			ss7 >> newSec;
			


			DateTime* d = new DateTime(newHour, newMin, newSec, newYear, newMonth, newDay);
			string word2 = "";
			line = line.erase(0,20);
			stringstream s(line);
			s >> word;
			Tweet* t = new Tweet();
			for(set<User*>::iterator itr = users.begin(); itr != users.end(); ++itr){
				if((*itr)->name() == word){
					t->setUser(**itr);
				}
			}
			
			string word3 = "";
			t->setTime(*d);
			//t->setText(word3);
			
			
			while(s>> word2){
				
				word3 = word3 + " " + word2;
				/*
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
				*/
			}
			t->setText(word3);
			for(set<User*>::iterator itr = users.begin(); itr != users.end(); ++itr){
				if((*itr)->name() == word){
					(*itr)->addTweet(t);
				}
			}

			//cout << word3;
			//cout << word3;
			allTweets.insert(t);


		} 
		lineNumber++;
	}
	
	return false;
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
		//cout << "a" << endl;
		ofstream ofile;
		string outputFileName = (*it)->name() + ".feed";
		ofile.open(outputFileName);
		/*
		ofile << "a" << endl;
		ofile << (*it)->name()<< endl;

		cout << (*it)->name()<< endl;
		list<Tweet*> userTweets = (*it)->tweets();
		for(list<Tweet*>::iterator itr= userTweets.begin(); itr!= userTweets.end(); ++itr){
			ofile << *itr << endl;
			cout << *itr << endl;
		}
		*/

		cout<<(*it)->name()<< endl;
		vector<Tweet*> feed;
		feed = (*it)->getFeed();

		for(vector<Tweet*>::iterator itr= feed.begin(); itr != feed.end(); ++itr){
			ofile << **itr << endl;
			cout << **itr << endl;

		}
	}

	
 }