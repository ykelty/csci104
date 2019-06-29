all: twitter

twitter:  twitter.cpp util.o twiteng.o tweet.o cmdhandler.o datetime.o user.o handler.o 
	g++ -g -Wall -std=c++11 twitter.cpp util.o twiteng.o tweet.o cmdhandler.o datetime.o user.o handler.o -o twitter

test: test.cpp util.o twiteng.o tweet.o cmdhandler.o datetime.o user.o handler.o 
	g++ -g -Wall -std=c++11 test.cpp util.o twiteng.o tweet.o cmdhandler.o datetime.o user.o handler.o -o test

twiteng.o: twiteng.cpp twiteng.h user.o tweet.o util.o
	g++ -g -Wall -std=c++11 -c twiteng.cpp -o twiteng.o

user.o: user.cpp user.h 
	g++ -g -Wall -std=c++11 -c user.cpp -o user.o

tweet.o: tweet.cpp tweet.h datetime.o
	g++ -g -Wall -std=c++11 -c tweet.cpp -o tweet.o

util.o: util.cpp util.h tweet.o
	g++ -g -Wall -std=c++11 -c util.cpp -o util.o

handler.o: handler.cpp handler.h twiteng.o
	g++ -g -Wall -std=c++11 -c handler.cpp -o handler.o

cmdhandler.o: cmdhandler.cpp cmdhandler.h util.o handler.o
	g++ -g -Wall -std=c++11 -c cmdhandler.cpp -o cmdhandler.o

datetime.o: datetime.cpp datetime.h 
	g++ -g -Wall -std=c++11 -c datetime.cpp -o datetime.o




 