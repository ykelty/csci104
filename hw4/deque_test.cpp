#include "deque.h"
#include "gtest/gtest.h"

class DequeTest: public testing::Test{

};


TEST(DequeTest, size) {

	Deque<int> d(6);
	EXPECT_EQ(0, d.size());

};


TEST(DequeTest, empty) {

	Deque<int> d;
	EXPECT_EQ(true, d.empty());

}

TEST(DequeTest, location) {

	Deque<int> d;
	int val = 1;
	d.push_front(val);
	val = 2;
	d.push_front(val);
	val = 3;
	d.push_front(val);
	val = 4;
	d.push_front(val);
	
	EXPECT_EQ(1, d[0]);
	EXPECT_EQ(2, d[1]);
	EXPECT_EQ(3, d[2]);
	EXPECT_EQ(4, d[3]);

}


TEST(DequeTest, pushback) {
	Deque<int> d;
	int val = 1;
	d.push_back(val);
	val = 2;
	d.push_back(val);
	val = 3;
	d.push_back(val);
	val = 4;
	d.push_back(val);
	
	EXPECT_EQ(4, d[0]);
	EXPECT_EQ(3, d[1]);
	EXPECT_EQ(2, d[2]);
	EXPECT_EQ(1, d[3]);

	d.pop_back();
	d.pop_back();
	
	EXPECT_EQ(2, d.size());
	
	EXPECT_EQ(2, d[0]);
	
	d.pop_front();
	EXPECT_EQ(2, d[0]);
	EXPECT_EQ(1, d.size());


}
/*
TEST_F(DequeTest, size) {

	d(6);
	EXPECT_EQ(6, d.size());

}
*/
