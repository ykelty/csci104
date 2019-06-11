#include <string>
#include <set>
#include <list>
#include <vector>
#include "user.h"


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

vector<Tweet*> User::getFeed(){
	vector<Tweet*> feed;
	for(set<User*>::iterator itr= followingUsers.begin(); itr != followingUsers.end(); ++itr){
		tweetsList = (*itr)->tweets();
		for(list<Tweet*>::iterator it= tweetsList.begin(); it != tweetsList.end(); ++it){
			feed.push_back(*it);
		}
	}
	
	return feed;
}