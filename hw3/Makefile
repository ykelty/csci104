all: twitter

twitter: twitter.cpp util.o twiteng.o tweet.o cmdhandler.o datetime.o user.o
	g++ -g -Wall -std=c++11 testFile.cpp -o testFile

twiteng.o: twiteng.cpp twiteng.h user.o tweet.o util.o
	g++ -g -Wall -std=c++11 twiteng.cpp -o twiteng

user.o: user.cpp user.h 
	g++ -g -Wall -std=c++11 user.cpp -o user

tweet.o: tweet.cpp tweet.h datetime.o
	g++ -g -Wall -std=c++11 tweet.cpp -o tweet

util.o: util.cpp util.h tweet.o
	g++ -g -Wall -std=c++11 util.cpp -o util

cmdhandler.o: cmdhandler.cpp cmdhandler.h util.o
	g++ -g -Wall -std=c++11 cmdhandler.cpp -o cmdhandler

datetime.o: datetime.cpp datetime.h 
	g++ -g -Wall -std=c++11 datetime.cpp -o datetime


 