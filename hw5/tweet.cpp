#include <string>
#include <set>
#include <list>
#include <vector>
#include "tweet.h"
#include "user.h"
#include "datetime.h"


using namespace std;


Tweet::Tweet(){
	

}

Tweet::Tweet(User* user, const DateTime& time, const std::string& text){
	u = user;
	tweetText = text;
	*timestamp = time;

}

DateTime const & Tweet::time() const{
	return *timestamp;

}

void Tweet::setTime(DateTime& time){
	timestamp = &time;
}
void Tweet::setUser(User& us){
	u = &us;
	userName = us.name();
}

string const & Tweet::text() const{
	return tweetText;

}

void Tweet::setText(string& text){
	tweetText = text;
}

set<string> Tweet::hashTags() const{
	return hashtags;

}

void Tweet::setHashTag(string& hashtag){
	hashtags.insert(hashtag);
}

bool Tweet::operator<(const Tweet& other) const{
	if(this->timestamp < other.timestamp){
		return true;
	}else{
		return false;
	}

}
void Tweet::setName(string& name){
	userName = name;
}

 User* Tweet::user() const{
  	return u;
 }





