#include "comparators.h"
#include <hsort.h>

#include <gtest/gtest.h>

#include <functional>
#include <string>
#include <vector>

#include <random_generator.h>
#include <misc_utils.h>

// Change both function calls to match the name of the merge sort function provided
// by the student.
#define HEAP_SORT(container, comparator) hsort(container, comparator);

// utility: prints a pair to a stream
// from here: http://www.cplusplus.com/forum/general/25633/
template <class T1, class T2>
std::ostream& operator<<(std::ostream& strm, const std::pair<T1, T2>& kvPair)
{
	strm << '[' << kvPair.first << ", " << kvPair.second << ']';
	return strm;
}

// Constructs a list by adding the items in the int array. 
template<typename T>
void ConstructList(std::vector<T>& container, int numberOfItems, T items[])
{
	int numberOfInsertedItems(0);
	container.clear();
	while(numberOfInsertedItems < numberOfItems)
	{
		container.push_back(items[numberOfInsertedItems]);
		++numberOfInsertedItems;
	}
}

// Constructs a list by adding a random number of items to the container. 
void ConstructList(std::vector<int>& container, int numberOfItems, RandomSeed seed)
{
	container = makeRandomIntVector(numberOfItems, seed, true);
}

// Constructs a list by adding items. 
template<typename T1, typename T2>
void ConstructList(std::vector<std::pair<T1, T2> >& container, int numberOfItems, std::pair<T1, T2> items[])
{
	int numberOfInsertedItems(0);
	container.clear();
	while(numberOfInsertedItems < numberOfItems)
	{
		container.push_back(items[numberOfInsertedItems]);
		++numberOfInsertedItems;
	}
}

// Checks that the given list is ordered after being sorted, according to the given comparator
template<typename T, typename Comparator>
testing::AssertionResult checkOrder(std::vector<T> const & list, size_t numItems, Comparator & comparator)
{
	if(numItems != list.size())
	{
		return testing::AssertionFailure() << "Length of list is different after being sorted!";
	}

	for(size_t index = 1; index < numItems; ++index)
	{
		// this item should be >= the previous one
		// so if it's less, show an error
		if(comparator(list[index], list[index - 1]))
		{
			return testing::AssertionFailure() << "List is sorted improperly!  Item at index " << index << " (" << list[index] << ")" << " is less than the item at index " << index-1 << " (" << list[index-1] << ")!";
		}
	}

	return testing::AssertionSuccess();
}


#define CHECK_ORDER(CONTAINER, NUMBER_OF_ITEMS, COMPARATOR) ASSERT_TRUE(checkOrder(CONTAINER, NUMBER_OF_ITEMS, COMPARATOR))


class HSortTest : public testing::Test
{
protected:
	HSortTest() { }
	~HSortTest() { }
	virtual void SetUp() { }
	virtual void TearDown() { }

	std::vector<int> mIntContainer;
	std::vector<std::string> mStringContainer;
	std::vector<std::pair<std::string, int> > mStringIntPairContainer;

	intCompareLess mIntLessComp;
	intCompareGreater mIntGreaterComp;
	stringCompareLess mStringLessComp;
	stringCompareGreater mStringGreaterComp;
	PairFirstLess<std::string, int> mStringIntPairLessComp;
	PairFirstGreater<std::string, int> mStringIntPairGreaterComp;
};

int main(int argc, char *argv[])
{
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}

TEST_F(HSortTest, SortEmpty)
{
	HEAP_SORT(mIntContainer, mIntLessComp);
	CHECK_ORDER(mIntContainer, 0, mIntLessComp);
}

TEST_F(HSortTest, SortSingleElement)
{
	int elements[] { 10 };
	ConstructList(mIntContainer, sizeof(elements) / sizeof(int), elements);
	HEAP_SORT(mIntContainer, mIntLessComp);
	CHECK_ORDER(mIntContainer, sizeof(elements) / sizeof(int), mIntLessComp);
}

TEST_F(HSortTest, SortTwoElements_InOrder)
{
	int elements[] { 10, 20 };
	ConstructList(mIntContainer, sizeof(elements) / sizeof(int), elements);
	HEAP_SORT(mIntContainer, mIntLessComp);
	CHECK_ORDER(mIntContainer, sizeof(elements) / sizeof(int), mIntLessComp);
}

TEST_F(HSortTest, SortTwoElements_OutOfOrder)
{
	int elements[] { 20, 10 };
	ConstructList(mIntContainer, sizeof(elements) / sizeof(int), elements);
	HEAP_SORT(mIntContainer, mIntLessComp);
	CHECK_ORDER(mIntContainer, sizeof(elements) / sizeof(int), mIntLessComp);
}

TEST_F(HSortTest, SortThreeElements_10_20_30)
{
	int elements[] { 10, 20, 30 };
	ConstructList(mIntContainer, sizeof(elements) / sizeof(int), elements);
	HEAP_SORT(mIntContainer, mIntLessComp);
	CHECK_ORDER(mIntContainer, sizeof(elements) / sizeof(int), mIntLessComp);
}

TEST_F(HSortTest, SortThreeElements_10_30_20)
{
	int elements[] { 10, 30, 20 };
	ConstructList(mIntContainer, sizeof(elements) / sizeof(int), elements);
	HEAP_SORT(mIntContainer, mIntLessComp);
	CHECK_ORDER(mIntContainer, sizeof(elements) / sizeof(int), mIntLessComp);
}

TEST_F(HSortTest, SortThreeElements_20_10_30)
{
	int elements[] { 20, 10, 30 };
	ConstructList(mIntContainer, sizeof(elements) / sizeof(int), elements);
	HEAP_SORT(mIntContainer, mIntLessComp);
	CHECK_ORDER(mIntContainer, sizeof(elements) / sizeof(int), mIntLessComp);
}

TEST_F(HSortTest, SortThreeElements_20_30_10)
{
	int elements[] { 20, 30, 10 };
	ConstructList(mIntContainer, sizeof(elements) / sizeof(int), elements);
	HEAP_SORT(mIntContainer, mIntLessComp);
	CHECK_ORDER(mIntContainer, sizeof(elements) / sizeof(int), mIntLessComp);
}

TEST_F(HSortTest, SortThreeElements_30_10_20)
{
	int elements[] { 30, 10, 20 };
	ConstructList(mIntContainer, sizeof(elements) / sizeof(int), elements);
	HEAP_SORT(mIntContainer, mIntLessComp);
	CHECK_ORDER(mIntContainer, sizeof(elements) / sizeof(int), mIntLessComp);
}

TEST_F(HSortTest, SortThreeElements_30_20_10)
{
	int elements[] { 30, 20, 10 };
	ConstructList(mIntContainer, sizeof(elements) / sizeof(int), elements);
	HEAP_SORT(mIntContainer, mIntLessComp);
	CHECK_ORDER(mIntContainer, sizeof(elements) / sizeof(int), mIntLessComp);
}

TEST_F(HSortTest, SortThreeElements_Greater)
{
	int elements[] { 30, 10, 20 };
	ConstructList(mIntContainer, sizeof(elements) / sizeof(int), elements);
	HEAP_SORT(mIntContainer, mIntGreaterComp);
	CHECK_ORDER(mIntContainer, sizeof(elements) / sizeof(int), mIntGreaterComp);
}

TEST_F(HSortTest, SortStrings)
{
	std::string elements[] = { "Betty", "Albert", "Esther", "Carla", "David" };
	ConstructList(mStringContainer, sizeof(elements) / sizeof(std::string), elements);
	HEAP_SORT(mStringContainer, mStringLessComp);
	CHECK_ORDER(mStringContainer, sizeof(elements) / sizeof(std::string), mStringLessComp);
}

TEST_F(HSortTest, SortPairs)
{
	std::pair<std::string, int> elements[] = { { "Betty", 0 }, { "Albert", 1 }, { "Esther", 2 }, { "David", 3 }, { "Carla", 4 } };
	ConstructList(mStringIntPairContainer, sizeof(elements) / sizeof(std::pair<std::string, int>), elements);
	HEAP_SORT(mStringIntPairContainer, mStringIntPairLessComp);
	CHECK_ORDER(mStringIntPairContainer, sizeof(elements) / sizeof(std::pair<std::string, int>), mStringIntPairLessComp);
}

TEST_F(HSortTest, Stress10RandomElements_Less)
{
	const int NUMBER_OF_ITEMS = 10;
	ConstructList(mIntContainer, NUMBER_OF_ITEMS, 20454);
	HEAP_SORT(mIntContainer, mIntLessComp);
	CHECK_ORDER(mIntContainer, NUMBER_OF_ITEMS, mIntLessComp);
}

TEST_F(HSortTest, Stress100RandomElements_Less)
{
	const int NUMBER_OF_ITEMS = 100;
	ConstructList(mIntContainer, NUMBER_OF_ITEMS, 23728);
	HEAP_SORT(mIntContainer, mIntLessComp);
	CHECK_ORDER(mIntContainer, NUMBER_OF_ITEMS, mIntLessComp);
}

TEST_F(HSortTest, Stress1000RandomElements_Less)
{
	const int NUMBER_OF_ITEMS = 1000;
	ConstructList(mIntContainer, NUMBER_OF_ITEMS, 2983);
	HEAP_SORT(mIntContainer, mIntLessComp);
	CHECK_ORDER(mIntContainer, NUMBER_OF_ITEMS, mIntLessComp);
}

TEST_F(HSortTest, Stress10000RandomElements_Less)
{
	removeStackLimit();

	const int NUMBER_OF_ITEMS = 10000;
	ConstructList(mIntContainer, NUMBER_OF_ITEMS, 93477);
	HEAP_SORT(mIntContainer, mIntLessComp);
	CHECK_ORDER(mIntContainer, NUMBER_OF_ITEMS, mIntLessComp);
}
