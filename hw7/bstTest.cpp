#include <iostream>
#include "bst.h"

using namespace std;

int main() {


// TEST(BSTRemove, EmptyTree)
/*
	BinarySearchTree<std::string, std::string> testTree;

	testTree.remove("supercalifragilisticexpialodocious");
	testTree.clear();

	// EXPECT_TRUE(verifyBST(testTree, ));


// TEST(BSTRemove, NodeMismatch)


	testTree.insert(std::make_pair("blah", "blah"));
	testTree.insert(std::make_pair("bluh", "blug"));

	testTree.remove("supercalifragilisticexpialodocious");

	// EXPECT_TRUE(verifyBST(testTree, "blah", "bluh"));
*/


// TEST(BSTRemove, SingleRemove)
	/*
	BinarySearchTree<int, double> bst;
	bst.insert(std::make_pair(1, 1.0));
	bst.remove(1);
	bst.print();
	bst.clear();

	// EXPECT_TRUE(verifyBST(bst, ));
	*/

	BinarySearchTree<int, double> bst;
	cout << "TWOCHILDRENREMOVE4NODE" << endl;
	bst.insert(std::make_pair(5, 1.0));
	cout << "a" << endl;
	bst.insert(std::make_pair(2, 1.0));
	bst.insert(std::make_pair(6, 1.0));
	cout << "a" << endl;
	bst.insert(std::make_pair(4, 1.0));
	cout << "a" << endl;
	bst.print();
	bst.remove(5);
	bst.print();
	bst.clear();

	
	
	cout << "TWOCHILDERNREMOVE3NODE" << endl;
	bst.insert(std::make_pair(2, 1.0));
	bst.insert(std::make_pair(1, 1.0));
	bst.insert(std::make_pair(3, 1.0));
	bst.print();
	bst.remove(2);
	bst.print();
	bst.clear();
	
	




// TEST(BSTRemove, RightChildRemove)
	/*
	cout << "RIGHTCHILDREMOVE" << endl;
	bst.insert(std::make_pair(1, 1.0));
	bst.insert(std::make_pair(2, 1.0));
	bst.insert(std::make_pair(3, 1.0));
	bst.print();
	bst.remove(1);
	bst.print();
	bst.clear();

	cout << "LEFTCHILDREMOVE" << endl;
	bst.insert(std::make_pair(3, 1.0));
	bst.insert(std::make_pair(2, 1.0));
	bst.insert(std::make_pair(1, 1.0));
	bst.print();
	bst.remove(3);
	bst.print();
	bst.clear();

	
	cout << "TWOCHILDERNREMOVE3NODE" << endl;
	bst.insert(std::make_pair(2, 1.0));
	bst.insert(std::make_pair(1, 1.0));
	bst.insert(std::make_pair(3, 1.0));
	bst.print();
	bst.remove(2);
	bst.print();
	bst.clear();
	*/
	// EXPECT_TRUE(verifyBST(bst, 2, 3));

/*
// TEST(BSTRemove, LeftChildRemove)

	BinarySearchTree<int, double> bst;
	bst.insert(std::make_pair(3, 1.0));
	bst.insert(std::make_pair(2, 1.0));
	bst.insert(std::make_pair(1, 1.0));
	bst.remove(3);

	// EXPECT_TRUE(verifyBST(bst, 1, 2));


// TEST(BSTRemove, TwoChildrenRemove_3Node)

	BinarySearchTree<int, double> bst;
	bst.insert(std::make_pair(2, 1.0));
	bst.insert(std::make_pair(1, 1.0));
	bst.insert(std::make_pair(3, 1.0));
	bst.remove(2);

	// EXPECT_TRUE(verifyBST(bst, 1, 3));

	// predecessor, 1, should be promoted
	ASSERT_NE(nullptr, bst.root_);
	// EXPECT_EQ(1, bst.root_->getKey());

	ASSERT_NE(nullptr, bst.root_->getRight());
	// EXPECT_EQ(3, bst.root_->getRight()->getKey());

	ASSERT_EQ(nullptr, bst.root_->getLeft());



// TEST(BSTRemove, TwoChildrenRemove_4Node)

	BinarySearchTree<int, double> bst;
	bst.insert(std::make_pair(5, 1.0));
	bst.insert(std::make_pair(2, 1.0));
	bst.insert(std::make_pair(6, 1.0));
	bst.insert(std::make_pair(4, 1.0));

	bst.remove(5);

	// EXPECT_TRUE(verifyBST(bst, 2, 6, 4));

	// predecessor, 4, should be promoted
	ASSERT_NE(nullptr, bst.root_);
	// EXPECT_EQ(4, bst.root_->getKey());

	ASSERT_NE(nullptr, bst.root_->getRight());
	// EXPECT_EQ(6, bst.root_->getRight()->getKey());

	ASSERT_NE(nullptr, bst.root_->getLeft());
	// EXPECT_EQ(2, bst.root_->getLeft()->getKey());
*/
}