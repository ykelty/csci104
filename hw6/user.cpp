#include <string>
#include <set>
#include <list>
#include <vector>
#include "user.h"

#include <iostream>


using namespace std;


User::User(string name){
	username = name;

}

string User::name() const{
	return username;

}

set<User*> User::followers() const{
	return followersUsers;

}

set<User*> User::following() const{
	return followingUsers;

}

list<Tweet*> User::tweets() const{
	return tweetsList;

}

void User::addFollower(User* u){
	followersUsers.insert(u);

}

void User::addFollowing(User* u){
	followingUsers.insert(u);

}

void User::addTweet(Tweet* t){
	tweetsList.push_back(t);

}
void User::addMention(Tweet* t){
	mentions.push_back(t);

}

vector<Tweet*> User::getFeed(){
	vector<Tweet*> feed;

	for(set<User*>::iterator itr= followingUsers.begin(); itr != followingUsers.end(); ++itr){
		list<Tweet*> ftweets = (*itr)->tweets();

		for(list<Tweet*>::iterator it= ftweets.begin(); it != ftweets.end(); ++it){
			//cout << *it << endl;
			//cout << "a" << endl;
			feed.push_back(*it);
		}
	}
	for(list<Tweet*>::iterator itr = tweetsList.begin(); itr != tweetsList.end(); ++itr){
		//cout << *itr << endl;
		feed.push_back(*itr);

	}
	for(vector<Tweet*>::iterator itr = mentions.begin(); itr != mentions.end(); ++itr){
		feed.push_back(*itr);
		
	}
	
	return feed;
}