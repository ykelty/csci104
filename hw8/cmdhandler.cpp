#include "cmdhandler.h"
#include "util.h"
#include <vector>
using namespace std;


//QUIT HANDLER
QuitHandler::QuitHandler()
{

}

QuitHandler::QuitHandler(Handler* next)
  : Handler(next)
{

}

bool QuitHandler::canHandle(const std::string& cmd) const
{
	return cmd == "QUIT";

}

Handler::HANDLER_STATUS_T QuitHandler::process(TwitEng* eng, std::istream& instr) const
{

	eng->dumpFeeds();
	return HANDLER_QUIT;
}


//AND HANDLER

AndHandler::AndHandler(){

}


AndHandler::AndHandler(Handler* next)
  : Handler(next)
{
	
}

bool AndHandler::canHandle(const std::string& cmd) const
{
	return cmd == "AND";
}

Handler::HANDLER_STATUS_T AndHandler::process(TwitEng* eng, std::istream& instr) const{

	vector<string> vec;
	while(!instr.fail()){
		string word;
		instr >> word;
		vec.push_back(word);
	}
	vector<Tweet*> newVec;
	newVec = eng->search(vec, 0);
	for(vector<Tweet*>::iterator it = newVec.begin(); it != newVec.end(); ++it){
		cout << **it << endl;
	}
	
	return HANDLER_OK;
}




//OR HANDLER

OrHandler::OrHandler()
{
	
}

bool OrHandler::canHandle(const std::string& cmd) const
{
	return cmd == "OR";
}


OrHandler::OrHandler(Handler* next)
   : Handler(next)
{
	
}

Handler::HANDLER_STATUS_T OrHandler::process(TwitEng* eng, std::istream& instr) const{
	vector<string> vec;
	while(!instr.fail()){
		string word;
		instr >> word;
		vec.push_back(word);
	}
	vector<Tweet*> newVec;
	newVec = eng->search(vec, 1);
	for(vector<Tweet*>::iterator it = newVec.begin(); it != newVec.end(); ++it){
		cout << **it << endl;
		//cout << "a" << endl;
	}

	return HANDLER_OK;
}


//TWEET HANDLER

TweetHandler::TweetHandler()
{

}

TweetHandler::TweetHandler(Handler* next)
  : Handler(next)
{
	
}

bool TweetHandler::canHandle(const std::string& cmd) const
{
	return true;
}

Handler::HANDLER_STATUS_T TweetHandler::process(TwitEng* eng, std::istream& instr) const{
	//eng->dumpFeeds();
	return HANDLER_OK;
}

//Follow Handler
FollowHandler::FollowHandler()
{

}

FollowHandler::FollowHandler(Handler* next)
  : Handler(next)
{

}

bool FollowHandler::canHandle(const std::string& cmd) const
{
	return cmd == "FOLLOW";

}

Handler::HANDLER_STATUS_T FollowHandler::process(TwitEng* eng, std::istream& instr) const
{

	//eng->dumpFeeds();
	return HANDLER_QUIT;
}

//Trending Handler
TrendingHandler::TrendingHandler()
{

}

TrendingHandler::TrendingHandler(Handler* next)
  : Handler(next)
{

}

bool TrendingHandler::canHandle(const std::string& cmd) const
{
	return cmd == "TRENDING";

}

Handler::HANDLER_STATUS_T TrendingHandler::process(TwitEng* eng, std::istream& instr) const
{
	//cout << "a" << endl;
	std::cout << "1" << std::endl;
	int n;
	instr >> n;
	
	if(n < 0){

		return HANDLER_ERROR;
	}
	
	eng->trending(n);
	return HANDLER_QUIT;
}
