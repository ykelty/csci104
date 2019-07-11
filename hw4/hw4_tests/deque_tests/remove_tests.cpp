//
// Tests for UnrolledLinkedList's pop operations
//

#include "list_utils.h"

#include <random_generator.h>

TEST(DequeRemove, OneItemFront)
{
	DequeStr list;

	list.push_back("a");

	ASSERT_EQ("a", list.operator[](0));

	list.pop_front();

	ASSERT_EQ(0, list.size());
}

TEST(DequeRemove, OneItemBack)
{
	DequeStr list;

	list.push_back("a");

	ASSERT_EQ("a", list.operator[](0));

	list.pop_back();

	ASSERT_EQ(0, list.size());
}

TEST(DequeRemove, RepeatedOneEleRemoveBack)
{
	DequeStr list;

	for(int count = 0; count < 4; ++count)
	{
		list.push_back("test");

		EXPECT_EQ("test", list.operator[](0));

		list.pop_back();

		EXPECT_EQ(0, list.size());
		EXPECT_EQ(true, list.empty());
	}
}

TEST(DequeRemove, RepeatedOneEleRemoveFront)
{
	DequeStr list;

	for(int count = 0; count < 4; ++count)
	{
		list.push_back("test");

		EXPECT_EQ("test", list.operator[](0));

		list.pop_front();

		EXPECT_EQ(0, list.size());
		EXPECT_EQ(true, list.empty());
	}
}

TEST(DequeRemove, Head3Elements)
{
	std::vector<std::string> contents{"foo", "BAR", "baz"};
	DequeStr * list = makeList(contents);

	list->pop_front();

	contents.erase(contents.begin());
	EXPECT_TRUE(checkListContent(list, contents));

	delete list;
}


TEST(DequeRemove, Tail3Elements)
{
	std::vector<std::string> contents{"foo", "BAR", "baz"};
	DequeStr * list = makeList(contents);

	list->pop_back();

	contents.erase(contents.begin() + 2);
	EXPECT_TRUE(checkListContent(list, contents));

	delete list;
}

TEST(DequeRemove, AtARRSIZE)
{
	std::vector<std::string> content = {"sup", "er", "cali", "frag", "il", "istic", "expi", "alo", "doc", "ious"};

	DequeStr * list = makeList(content);

	list->pop_back();

	EXPECT_EQ("doc", list->operator[](8));

	delete list;
}


TEST(DequeRemove, AtARRSIZEPlusOne)
{
	std::vector<std::string> content = {"sup", "er", "cal", "i", "frag", "il", "istic", "expi", "alo", "doc", "ious"};

	DequeStr * list = makeList(content);

	list->pop_back();

	EXPECT_EQ("doc", list->operator[](9));

	delete list;
}

TEST(DequeRemove, SongOfBackAndFront)
{
	DequeStr list;

	list.push_back("oldfront");
	list.push_back("oldback");

	EXPECT_TRUE(checkListContent(&list, {"oldfront", "oldback"}));

	// this should create an empty slot at the front of the list, and the new element can be put there
	list.pop_front();
	list.push_front("newfront");

	EXPECT_TRUE(checkListContent(&list, {"newfront", "oldback"}));

	// now, a new element struct should get created at the front
	list.pop_back();
	list.push_front("cloudfront");

	EXPECT_TRUE(checkListContent(&list, {"cloudfront", "newfront"}));

	// now, the original head should get deleted
	list.pop_back();

	EXPECT_TRUE(checkListContent(&list, {"cloudfront"}));

	list.pop_front();

	EXPECT_TRUE(checkListContent(&list, {}));

	list.push_front("newback");

	EXPECT_TRUE(checkListContent(&list, {"newback"}));

}


TEST(DequeRemove, 50ElementsFromBack)
{
	const size_t numElements = 50;
	const RandomSeed origSeed = 18;

	std::vector<std::string> contents(makeRandomAlphaStringVector(numElements, origSeed, 12, true));

	DequeStr * list = makeList(contents);

	for(int index = static_cast<int>(contents.size() - 1); index >= 0; --index)
	{
		list->pop_back();
		contents.erase(contents.begin() + index);
		EXPECT_TRUE(checkListContent(list, contents));
	}

	delete list;

}


TEST(DequeRemove, 50ElementsFromFront)
{
	const size_t numElements = 50;
	const RandomSeed origSeed = 5;

	std::vector<std::string> contents(makeRandomAlphaStringVector(numElements, origSeed, 12, true));

	DequeStr * list = makeList(contents);

	for(size_t counter = 0; counter < contents.size(); ++counter)
	{
		list->pop_front();
		contents.erase(contents.begin());
		EXPECT_TRUE(checkListContent(list, contents));
	}

	delete list;

}
