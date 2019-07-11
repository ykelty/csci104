#ifndef BST_H
#define BST_H

#include <iostream>
#include <exception>
#include <cstdlib>
#include <utility>

/**
 * A templated class for a Node in a search tree.
 * The getters for parent/left/right are virtual so
 * that they can be overridden for future kinds of
 * search trees, such as Red Black trees, Splay trees,
 * and AVL trees.
 */
template <typename Key, typename Value>
class Node
{
public:
    Node(const Key& key, const Value& value, Node<Key, Value>* parent);
    virtual ~Node();

    const std::pair<const Key, Value>& getItem() const;
    std::pair<const Key, Value>& getItem();
    const Key& getKey() const;
    const Value& getValue() const;
    Value& getValue();

    virtual Node<Key, Value>* getParent() const;
    virtual Node<Key, Value>* getLeft() const;
    virtual Node<Key, Value>* getRight() const;

    void setParent(Node<Key, Value>* parent);
    void setLeft(Node<Key, Value>* left);
    void setRight(Node<Key, Value>* right);
    void setValue(const Value &value);

protected:
    std::pair<const Key, Value> item_;
    Node<Key, Value>* parent_;
    Node<Key, Value>* left_;
    Node<Key, Value>* right_;
};

/*
  -----------------------------------------
  Begin implementations for the Node class.
  -----------------------------------------
*/

/**
* Explicit constructor for a node.
*/
template<typename Key, typename Value>
Node<Key, Value>::Node(const Key& key, const Value& value, Node<Key, Value>* parent) :
    item_(key, value),
    parent_(parent),
    left_(NULL),
    right_(NULL)
{

}

/**
* Destructor, which does not need to do anything since the pointers inside of a node
* are only used as references to existing nodes. The nodes pointed to by parent/left/right
* are freed by the BinarySearchTree.
*/
template<typename Key, typename Value>
Node<Key, Value>::~Node()
{

}

/**
* A const getter for the item.
*/
template<typename Key, typename Value>
const std::pair<const Key, Value>& Node<Key, Value>::getItem() const
{
    return item_;
}

/**
* A non-const getter for the item.
*/
template<typename Key, typename Value>
std::pair<const Key, Value>& Node<Key, Value>::getItem()
{
    return item_;
}

/**
* A const getter for the key.
*/
template<typename Key, typename Value>
const Key& Node<Key, Value>::getKey() const
{
    return item_.first;
}

/**
* A const getter for the value.
*/
template<typename Key, typename Value>
const Value& Node<Key, Value>::getValue() const
{
    return item_.second;
}

/**
* A non-const getter for the value.
*/
template<typename Key, typename Value>
Value& Node<Key, Value>::getValue()
{
    return item_.second;
}

/**
* An implementation of the virtual function for retreiving the parent.
*/
template<typename Key, typename Value>
Node<Key, Value>* Node<Key, Value>::getParent() const
{
    return parent_;
}

/**
* An implementation of the virtual function for retreiving the left child.
*/
template<typename Key, typename Value>
Node<Key, Value>* Node<Key, Value>::getLeft() const
{
    return left_;
}

/**
* An implementation of the virtual function for retreiving the right child.
*/
template<typename Key, typename Value>
Node<Key, Value>* Node<Key, Value>::getRight() const
{
    return right_;
}

/**
* A setter for setting the parent of a node.
*/
template<typename Key, typename Value>
void Node<Key, Value>::setParent(Node<Key, Value>* parent)
{
    parent_ = parent;
}

/**
* A setter for setting the left child of a node.
*/
template<typename Key, typename Value>
void Node<Key, Value>::setLeft(Node<Key, Value>* left)
{
    left_ = left;
}

/**
* A setter for setting the right child of a node.
*/
template<typename Key, typename Value>
void Node<Key, Value>::setRight(Node<Key, Value>* right)
{
    right_ = right;
}

/**
* A setter for the value of a node.
*/
template<typename Key, typename Value>
void Node<Key, Value>::setValue(const Value& value)
{
    item_.second = value;
}

/*
  ---------------------------------------
  End implementations for the Node class.
  ---------------------------------------
*/

/**
* A templated unbalanced binary search tree.
*/
template <typename Key, typename Value>
class BinarySearchTree
{
public:
    BinarySearchTree(); //TODO
    virtual ~BinarySearchTree(); //TODO
    virtual void insert(const std::pair<const Key, Value>& keyValuePair); //TODO
    virtual void remove(const Key& key); //TODO
    void clear(); //TODO
    bool isBalanced() const; //TODO
    void print() const;
    bool empty() const;

    template<typename PPKey, typename PPValue>
    friend void prettyPrintBST(BinarySearchTree<PPKey, PPValue> & tree);
public:
    /**
    * An internal iterator class for traversing the contents of the BST.
    */
    class iterator  // TODO
    {
    public:
        iterator();

        std::pair<const Key,Value>& operator*() const;
        std::pair<const Key,Value>* operator->() const;

        bool operator==(const iterator& rhs) const;
        bool operator!=(const iterator& rhs) const;

        iterator& operator++();

    protected:
        friend class BinarySearchTree<Key, Value>;
        iterator(Node<Key,Value>* ptr);
        Node<Key, Value> *current_;
    };

public:
    iterator begin() const;
    iterator end() const;
    iterator find(const Key& key) const;

protected:
    // Mandatory helper functions
    Node<Key, Value>* internalFind(const Key& k) const; // TODO
    Node<Key, Value> *getSmallestNode() const;  // TODO
    static Node<Key, Value>* predecessor(Node<Key, Value>* current); // TODO
    static Node<Key, Value>* successor(Node<Key, Value>* current);
    // Note:  static means these functions don't have a "this" pointer
    //        and instead just use the input argument.

    // Provided helper functions
    virtual void printRoot (Node<Key, Value> *r) const;
    virtual void nodeSwap( Node<Key,Value>* n1, Node<Key,Value>* n2) ;

    // Add helper functions here
    void clearHelper(Node<Key, Value>* current);
    bool heightHelper(Node<Key, Value>* node) const;


protected:
    Node<Key, Value>* root_;
    // You should not need other data members
};

/*
--------------------------------------------------------------
Begin implementations for the BinarySearchTree::iterator class.
---------------------------------------------------------------
*/

/**
* Explicit constructor that initializes an iterator with a given node pointer.
*/
template<class Key, class Value>
BinarySearchTree<Key, Value>::iterator::iterator(Node<Key,Value> *ptr)
{
    // TODO
    current_ = ptr;
}

/**
* A default constructor that initializes the iterator to NULL.
*/
template<class Key, class Value>
BinarySearchTree<Key, Value>::iterator::iterator()
{
    // TODO
    current_ = NULL;
}

/**
* Provides access to the item.
*/
template<class Key, class Value>
std::pair<const Key,Value> &
BinarySearchTree<Key, Value>::iterator::operator*() const
{
    return current_->getItem();
}

/**
* Provides access to the address of the item.
*/
template<class Key, class Value>
std::pair<const Key,Value> *
BinarySearchTree<Key, Value>::iterator::operator->() const
{
    return &(current_->getItem());
}

/**
* Checks if 'this' iterator's internals have the same value
* as 'rhs'
*/
template<class Key, class Value>
bool
BinarySearchTree<Key, Value>::iterator::operator==(
    const BinarySearchTree<Key, Value>::iterator& rhs) const
{
    if(current_ == rhs.current_){
        return true;
    }else{
        return false;
    }
}

/**
* Checks if 'this' iterator's internals have a different value
* as 'rhs'
*/
template<class Key, class Value>
bool
BinarySearchTree<Key, Value>::iterator::operator!=(
    const BinarySearchTree<Key, Value>::iterator& rhs) const
{
    // TODO
    if(current_ == rhs.current_){
        return false;
    }else{
        return true;
    }
}


/**
* Advances the iterator's location using an in-order sequencing
*/
template<class Key, class Value>
typename BinarySearchTree<Key, Value>::iterator&
BinarySearchTree<Key, Value>::iterator::operator++()
{
    // TODO
    /*
    if(current_->getRight() != NULL)
    {
        current_ = current_->getRight();
        while(current_->getLeft() != NULL)
        {
            current_ = current_->getLeft();
        }
    }else if(current_->getRight() == NULL)
    {
        Node<Key, Value>* parent = current_->getParent();
        if(parent->getLeft() == current_)
        {
            current_ = parent;
        }else
        {
            while(current_ != parent->getLeft())
            {
                current_ = parent;
                parent = current_->getParent();

            }
        }
    }
    return *this;
    */
    /*
    current_ = successor(current_);
    return *this;
    */

    if(current_->getRight() != NULL)
    {
        current_ = current_->getRight();
        while(current_->getLeft() != NULL)
        {
            current_ = current_->getLeft();
        }
    }
    else if(current_->getRight() == NULL)
    {
        Node<Key, Value>* parent = current_->getParent();
        while(parent != NULL && current_ == parent->getRight())
        {
            
            current_ = parent;
            parent = parent->getParent();
        }
        current_ = parent;
    }
    return *this;

}


/*
-------------------------------------------------------------
End implementations for the BinarySearchTree::iterator class.
-------------------------------------------------------------
*/

/*
-----------------------------------------------------
Begin implementations for the BinarySearchTree class.
-----------------------------------------------------
*/

/**
* Default constructor for a BinarySearchTree, which sets the root to NULL.
*/
template<class Key, class Value>
BinarySearchTree<Key, Value>::BinarySearchTree()
{
    // TODO
    root_ = NULL;
}

template<typename Key, typename Value>
BinarySearchTree<Key, Value>::~BinarySearchTree()
{
    // TODO
    clear();

}

/**
 * Returns true if tree is empty
*/
template<class Key, class Value>
bool BinarySearchTree<Key, Value>::empty() const
{
    return root_ == NULL;
}

template<typename Key, typename Value>
void BinarySearchTree<Key, Value>::print() const
{
    printRoot(root_);
    std::cout << "\n";
}

/**
* Returns an iterator to the "smallest" item in the tree
*/
template<class Key, class Value>
typename BinarySearchTree<Key, Value>::iterator
BinarySearchTree<Key, Value>::begin() const
{
    BinarySearchTree<Key, Value>::iterator begin(getSmallestNode());
    return begin;
}

/**
* Returns an iterator whose value means INVALID
*/
template<class Key, class Value>
typename BinarySearchTree<Key, Value>::iterator
BinarySearchTree<Key, Value>::end() const
{
    BinarySearchTree<Key, Value>::iterator end(NULL);
    return end;
}

/**
* Returns an iterator to the item with the given key, k
* or the end iterator if k does not exist in the tree
*/
template<class Key, class Value>
typename BinarySearchTree<Key, Value>::iterator
BinarySearchTree<Key, Value>::find(const Key & k) const
{
    Node<Key, Value> *curr = internalFind(k);
    BinarySearchTree<Key, Value>::iterator it(curr);
    return it;
}

/**
* An insert method to insert into a Binary Search Tree.
* The tree will not remain balanced when inserting.
*/
template<class Key, class Value>
void BinarySearchTree<Key, Value>::insert(const std::pair<const Key, Value> &keyValuePair)
{
    //TODO
    
    Node<Key, Value> *newNode;
    Node<Key, Value> *curr = root_;
    if(curr == NULL){
        newNode = new Node<Key, Value>(keyValuePair.first, keyValuePair.second, curr);
        root_ = newNode;
    }else{
        while((curr->getLeft() != NULL) || (curr->getRight() != NULL)){

            if(keyValuePair.first < curr->getKey()){
                if(curr->getLeft() != NULL){
                    curr = curr->getLeft();
                }else{
                    break;
                }

            }else if(keyValuePair.first > curr->getKey()){

                if(curr->getRight() != NULL){
                    curr = curr->getRight();
                }else{
                    break;
                }

            }else if(keyValuePair.first == curr->getKey()){

                curr->setValue(keyValuePair.second);
                return;

            }
        }
        if(keyValuePair.first < curr->getKey()){
            newNode = new Node<Key, Value>(keyValuePair.first, keyValuePair.second, curr);
            curr->setLeft(newNode);
            return;

        }else if(keyValuePair.first > curr->getKey()){
            newNode = new Node<Key, Value>(keyValuePair.first, keyValuePair.second, curr);
            curr->setRight(newNode);
            return;
        }

        
    }
    



}


/**
* A remove method to remove a specific key from a Binary Search Tree.
* The tree may not remain balanced after removal.
*/
template<typename Key, typename Value>
void BinarySearchTree<Key, Value>::remove(const Key& key)
{
    // TODO
    /*
    Node<Key, Value> *curr = root_;
    while(curr != NULL){
        if(key < curr.first)
        {
            curr = curr.getLeft();

        }else if(key > curr.first)
        {
            curr = curr.getRight();

        }else{

        }
    }
    */
    Node<Key, Value> *theNode = internalFind(key);
    if(theNode == NULL)
    {
        return;

    }else
    {
        if((theNode->getLeft() != NULL) && (theNode->getRight() != NULL)){

            
            Node<Key, Value> *preNode = predecessor(theNode);
            Node<Key, Value> *preParent = preNode->getParent();
            //Node<Key, Value> *preLeft = preNode->getLeft();
            //Node<Key, Value> *preRight = preNode->getRight();
            nodeSwap(theNode, preNode);
            //preNode->setLeft(theNode->getLeft());
            //preNode->setParent(theNode->getParent());
            //preNode->setRight(theNode->getParent());
            //theNode->getLeft()->setParent(preNode);
            //theNode->getRight()->setParent(preNode);

            preParent->setRight(NULL);

            
            delete theNode;
            theNode = NULL;
            return;
            
        }
        if((theNode->getLeft() == NULL) || (theNode->getRight() == NULL)){
            if(theNode->getLeft() != NULL)
            {

                 if(theNode->getParent() == NULL){
                    
                    root_ = theNode->getLeft();
                    theNode->getLeft()->setParent(NULL);
                    delete theNode;
                    theNode = NULL;
                    
                }else{
                    theNode->getLeft()->setParent(theNode->getParent());
                    theNode->getParent()->setLeft(theNode->getLeft());
                    delete theNode;
                    theNode = NULL;
                }


            }else if(theNode->getRight() != NULL)
            {
                if(theNode->getParent() == NULL){
                    
                    root_ = theNode->getRight();
                    theNode->getRight()->setParent(NULL);
                    delete theNode;
                    theNode = NULL;
                    
                }else{
                    theNode->getRight()->setParent(theNode->getParent());
                    theNode->getParent()->setRight(theNode->getRight());
                    delete theNode;
                    theNode = NULL;
                }

                //nodeSwap(theNode, theNode->getRight());
            }
            
        }

    }
}



template<class Key, class Value>
Node<Key, Value>*
BinarySearchTree<Key, Value>::predecessor(Node<Key, Value>* current)
{
    // TODO
    if(current == NULL){
        return current;
    }
    if(current->getLeft() != NULL){
        current = current->getLeft();
        while(current->getRight() != NULL)
        {
            current = current->getRight();
        }
        //return current;

    }else{
        while(current->getRight() == NULL)
        {
            if(current->getParent() != NULL){
                current = current->getParent();
            }else{
                break;
            }
        }
        //return current;
    }
    return current;
}

template<class Key, class Value>
Node<Key, Value>*
BinarySearchTree<Key, Value>::successor(Node<Key, Value>* current)
{
    // TODO
    if(current->getRight() != NULL){
        while(current->getLeft() != NULL)
        {
            current = current->getLeft();
        }
        return current;
    }else{
        while(current->getLeft() == NULL)
        {
            current = current->getParent();
        }
        return current;
    }
}


/**
* A method to remove all contents of the tree and
* reset the values in the tree for use again.
*/
template<typename Key, typename Value>
void BinarySearchTree<Key, Value>::clearHelper(Node<Key, Value>* current)
{
    if(current == NULL){
        return;
    }

    if(current->getLeft() != NULL)
    {
        clearHelper(current->getLeft());
    }

    

    if(current->getRight() != NULL)
    {
        clearHelper(current->getRight());
    }

    delete current;

}


template<typename Key, typename Value>
void BinarySearchTree<Key, Value>::clear()
{
    // TODO
    Node<Key, Value> *curr = root_;
    if(curr == NULL){
        return;
    }
    clearHelper(curr);
    root_ = NULL;

}


/**
* A helper function to find the smallest node in the tree.
*/
template<typename Key, typename Value>
Node<Key, Value>*
BinarySearchTree<Key, Value>::getSmallestNode() const
{
    // TODO
    Node<Key, Value> *curr = root_;
    while(curr->getLeft() != NULL){
        curr = curr->getLeft();
    }
    return curr;
}

/**
* Helper function to find a node with given key, k and
* return a pointer to it or NULL if no item with that key
* exists
*/
template<typename Key, typename Value>
Node<Key, Value>* BinarySearchTree<Key, Value>::internalFind(const Key& key) const
{
    // TODO
    Node<Key, Value> *curr = root_;
    while(curr != NULL){
        if(curr->getKey() == key){
            return curr;
        }else if(key < curr->getKey()){
            curr = curr->getLeft();
        }else if(key > curr->getKey()){
            curr = curr->getRight();
        }
    }
    return NULL;
}

/**
 * Return true iff the BST is balanced.
 */
template<typename Key, typename Value>
bool BinarySearchTree<Key, Value>::heightHelper(Node<Key, Value>* node) const
{
    /*
    if(node->getLeft() != NULL){
        heightHelper(node->getLeft(), height++);
    }
    if(node->getRight() != NULL){
        heightHelper(node->getRight(), height--);
    }
    return height;
    */
    if(node == NULL){
        return true;
    }else{
        int rheight = getSubtreeHeight(node->getRight());
        int lheight = getSubtreeHeight(node->getLeft());
        int difference = rheight - lheight;
        if(abs(difference) <= 1){
            if(heightHelper(node->getRight()) && heightHelper(node->getLeft())){
                return true;
            }
        }
        return false;
    }

}

template<typename Key, typename Value>
bool BinarySearchTree<Key, Value>::isBalanced() const
{
    // TODO
    /*
    Node<Key, Value> *aNode = root_;
    int height = 0;
    if(aNode == NULL){
        return true;
    }else{
        height = heightHelper(aNode, height);
        if(height == -1 || height == 0 || height == 1){
            return true;
        }else{
            return false;
        }
    }
    */
    


    return heightHelper(root_);
}



template<typename Key, typename Value>
void BinarySearchTree<Key, Value>::nodeSwap( Node<Key,Value>* n1, Node<Key,Value>* n2)
{
    if((n1 == n2) || (n1 == NULL) || (n2 == NULL) ) {
        return;
    }
    Node<Key, Value>* n1p = n1->getParent();
    Node<Key, Value>* n1r = n1->getRight();
    Node<Key, Value>* n1lt = n1->getLeft();
    bool n1isLeft = false;
    if(n1p != NULL && (n1 == n1p->getLeft())) n1isLeft = true;
    Node<Key, Value>* n2p = n2->getParent();
    Node<Key, Value>* n2r = n2->getRight();
    Node<Key, Value>* n2lt = n2->getLeft();
    bool n2isLeft = false;
    if(n2p != NULL && (n2 == n2p->getLeft())) n2isLeft = true;


    Node<Key, Value>* temp;
    temp = n1->getParent();
    n1->setParent(n2->getParent());
    n2->setParent(temp);

    temp = n1->getLeft();
    n1->setLeft(n2->getLeft());
    n2->setLeft(temp);

    temp = n1->getRight();
    n1->setRight(n2->getRight());
    n2->setRight(temp);

    if( (n1r != NULL && n1r == n2) ) {
        n2->setRight(n1);
        n1->setParent(n2);
    }
    else if( n2r != NULL && n2r == n1) {
        n1->setRight(n2);
        n2->setParent(n1);

    }
    else if( n1lt != NULL && n1lt == n2) {
        n2->setLeft(n1);
        n1->setParent(n2);

    }
    else if( n2lt != NULL && n2lt == n1) {
        n1->setLeft(n2);
        n2->setParent(n1);

    }


    if(n1p != NULL && n1p != n2) {
        if(n1isLeft) n1p->setLeft(n2);
        else n1p->setRight(n2);
    }
    if(n1r != NULL && n1r != n2) {
        n1r->setParent(n2);
    }
    if(n1lt != NULL && n1lt != n2) {
        n1lt->setParent(n2);
    }

    if(n2p != NULL && n2p != n1) {
        if(n2isLeft) n2p->setLeft(n1);
        else n2p->setRight(n1);
    }
    if(n2r != NULL && n2r != n1) {
        n2r->setParent(n1);
    }
    if(n2lt != NULL && n2lt != n1) {
        n2lt->setParent(n1);
    }


    if(this->root_ == n1) {
        this->root_ = n2;
    }
    else if(this->root_ == n2) {
        this->root_ = n1;
    }

}

/**
 * Lastly, we are providing you with a print function,
   BinarySearchTree::printRoot().
   Just call it with a node to start printing at, e.g:
   this->printRoot(this->root_) // or any other node pointer
   It will print up to 5 levels of the tree rooted at the passed node,
   in ASCII graphics format.
   We hope it will make debugging easier!
  */

// include print function (in its own file because it's fairly long)
#include "print_bst.h"

/*
---------------------------------------------------
End implementations for the BinarySearchTree class.
---------------------------------------------------
*/

#endif