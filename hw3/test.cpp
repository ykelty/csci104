#include "twiteng.h"
#include "util.h"
#include "tweet.h"
#include "datetime.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(int argc, char* argv[]){


	if(argc < 2){
    	cerr << "Please provide the twitter data file" << endl;
    	return 1;
  	}



    TwitEng twit;

    twit.parse(argv[1]);
    twit.dumpFeeds();

    return 0;


}