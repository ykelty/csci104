all: tests laundry

tests: FORCE deque_test
	valgrind --leak-check=yes ./deque_test

FORCE: ;

deque_test: deque_test.cpp deque.h
	g++ -Wall -std=c++11 -g deque.h deque_test.cpp -I /usr/include/gtest/ -l gtest -l gtest_main -pthread -o deque_test

laundry: laundry.cpp stack.h
	g++ -Wall -std=c++11 -g laundry.cpp stack.h -o laundry

remdup: rem_dup.cpp rem_dup_lib.cpp rem_dup_lib.h
	g++ -g -std=c++11 rem_dup_lib.h rem_dup.cpp rem_dup_lib.cpp -o remdup 






#all: laundry

#laundry: laundry.cpp 
#	g++ -g -std=c++11 laundry.cpp -o laundry

#remdup: rem_dup.cpp rem_dup_lib.cpp
#	g++ -g -std=c++11 rem_dup.cpp rem_dup_lib.cpp -o remdup 

#deque_test: deque_test.cpp 
#	g++ -g -std=c++11 deque_test.cpp -o deque_test

#laundry: laundry.cpp
#	g++ -g -std=c++11 laundry.cpp -o laundry

#stack_test: stack_test.cpp
#	g++ -g -std=c++11 stack_test.cpp -o stack_test

