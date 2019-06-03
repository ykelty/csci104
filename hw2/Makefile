
all: majors

setops: setops.cpp setops.h 
	g++ -g -Wall -c setops.cpp -o setops.o

majors: majors.cpp setops.o
	g++ -g -Wall majors.cpp setops.o -o majors