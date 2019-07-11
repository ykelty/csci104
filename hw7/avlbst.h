#ifndef RBBST_H
#define RBBST_H

#include <iostream>
#include <exception>
#include <cstdlib>
#include <algorithm>
#include "bst.h"

struct KeyError { };

/**
* A special kind of node for an AVL tree, which adds the balance as a data member, plus
* other additional helper functions. You do NOT need to implement any functionality or
* add additional data members or helper functions.
*/
template <typename Key, typename Value>
class AVLNode : public Node<Key, Value>
{
public:
    // Constructor/destructor.
    AVLNode(const Key& key, const Value& value, AVLNode<Key, Value>* parent);
    virtual ~AVLNode();

    // Getter/setter for the node's height.
    char getBalance () const;
    void setBalance (char balance);
    void updateBalance(char diff);

    // Getters for parent, left, and right. These need to be redefined since they
    // return pointers to AVLNodes - not plain Nodes. See the Node class in bst.h
    // for more information.
    virtual AVLNode<Key, Value>* getParent() const override;
    virtual AVLNode<Key, Value>* getLeft() const override;
    virtual AVLNode<Key, Value>* getRight() const override;

protected:
    char balance_;
};

/*
  -------------------------------------------------
  Begin implementations for the AVLNode class.
  -------------------------------------------------
*/

/**
* An explicit constructor to initialize the elements by calling the base class constructor and setting
* the color to red since every new node will be red when it is first inserted.
*/
template<class Key, class Value>
AVLNode<Key, Value>::AVLNode(const Key& key, const Value& value, AVLNode<Key, Value> *parent) :
    Node<Key, Value>(key, value, parent), balance_(0)
{

}

/**
* A destructor which does nothing.
*/
template<class Key, class Value>
AVLNode<Key, Value>::~AVLNode()
{

}

/**
* A getter for the balance of a AVLNode.
*/
template<class Key, class Value>
char AVLNode<Key, Value>::getBalance() const
{
    return balance_;
}

/**
* A setter for the balance of a AVLNode.
*/
template<class Key, class Value>
void AVLNode<Key, Value>::setBalance(char balance)
{
    balance_ = balance;
}

/**
* Adds diff to the balance of a AVLNode.
*/
template<class Key, class Value>
void AVLNode<Key, Value>::updateBalance(char diff)
{
    balance_ += diff;
}

/**
* An overridden function for getting the parent since a static_cast is necessary to make sure
* that our node is a AVLNode.
*/
template<class Key, class Value>
AVLNode<Key, Value> *AVLNode<Key, Value>::getParent() const
{
    return static_cast<AVLNode<Key, Value>*>(this->parent_);
}

/**
* Overridden for the same reasons as above.
*/
template<class Key, class Value>
AVLNode<Key, Value> *AVLNode<Key, Value>::getLeft() const
{
    return static_cast<AVLNode<Key, Value>*>(this->left_);
}

/**
* Overridden for the same reasons as above.
*/
template<class Key, class Value>
AVLNode<Key, Value> *AVLNode<Key, Value>::getRight() const
{
    return static_cast<AVLNode<Key, Value>*>(this->right_);
}


/*
  -----------------------------------------------
  End implementations for the AVLNode class.
  -----------------------------------------------
*/


template <class Key, class Value>
class AVLTree : public BinarySearchTree<Key, Value>
{
public:
    virtual void insert (const std::pair<const Key, Value> &new_item); // TODO
    virtual void remove(const Key& key);  // TODO
protected:
    virtual void nodeSwap( AVLNode<Key,Value>* n1, AVLNode<Key,Value>* n2);

    // Add helper functions here
    void rotateRight(AVLNode<Key, Value> *grandParent, AVLNode<Key, Value> *parent, AVLNode<Key, Value> *node);
    void rotateLeft(AVLNode<Key, Value> *grandParent, AVLNode<Key, Value> *parent, AVLNode<Key, Value> *node);
    void insert_fix (AVLNode<Key, Value> *parent, AVLNode<Key, Value> *node);

};

template<class Key, class Value>
void AVLTree<Key, Value>::rotateRight(AVLNode<Key, Value>* grandParent, AVLNode<Key, Value>* parent, AVLNode<Key, Value>* node){
    /*
    grandParent->getParent()->setLeft(parent);
    parent->setParent(grandParent->getParent());
    parent->setRight(grandParent);
    grandParent->setParent(parent);
    */
    /*
    if(node->getRight() != NULL){
        parent->setLeft(node->getRight());
        node->getRight()->setParent(parent);
    }else{
        parent->setLeft(NULL);
    }
    parent->setParent(node);
    node->setRight(parent);
    if(grandParent->getRight() == parent){
        grandParent->setRight(node);
    }else if(grandParent->getLeft() ==parent){
        grandParent->setLeft(node);
    }
    node->setParent(grandParent);
    */
    
    AVLNode<Key, Value>* ggNode = grandParent->getParent();
    grandParent->setParent(parent);
    grandParent->setLeft(parent->getRight());
    if(grandParent->getLeft() != NULL){
        grandParent->getLeft()->setParent(grandParent);
    }
    parent->setRight(grandParent);
    if(ggNode == NULL){
        this->root_ = parent;
    }
    parent->setParent(ggNode);
    

}

template<class Key, class Value>
void AVLTree<Key, Value>::rotateLeft(AVLNode<Key, Value>* grandParent, AVLNode<Key, Value>* parent, AVLNode<Key, Value>* node){
    
    AVLNode<Key, Value>* ggNode = grandParent->getParent();
    grandParent->setParent(parent);
    grandParent->setRight(parent->getLeft());
    if(grandParent->getRight() != NULL){
        grandParent->getRight()->setParent(grandParent);
    }
    parent->setLeft(grandParent);
    if(ggNode == NULL){
        this->root_ = parent;
    }
    parent->setParent(ggNode);
    

}


template<class Key, class Value>
void AVLTree<Key, Value>::insert_fix (AVLNode<Key, Value>* parent, AVLNode<Key, Value>* node)
{
    

    if(parent == NULL || parent->getParent() == NULL){

        return;
    }else{
        AVLNode<Key, Value>* grandParent = parent->getParent();

        std::cout << (int) grandParent->getBalance() << " " << (int)parent->getBalance() << std::endl;
        if(grandParent->getLeft() == parent){ 

            grandParent->updateBalance(-1);

            std::cout << (int) grandParent->getBalance() << " " << (int)parent->getBalance() << std::endl;
            if(grandParent->getBalance() == -1){
                
                return insert_fix(grandParent, parent);
            }
            if(grandParent->getBalance() == 0){
               
                return;

            }
            if(grandParent->getBalance() == -2){ 
                

                if(parent->getRight() == node){ //zig-zag
                    rotateLeft(parent, node, NULL);
                    rotateRight(grandParent, node, parent);
                    std::cout << (int) grandParent->getBalance() << " " << (int)parent->getBalance() << std::endl;

                    if(node->getBalance() == -1){
                        parent->setBalance(0);
                        grandParent->setBalance(1);
                        node->setBalance(0);
                    }
                    if(node->getBalance() == 0){
                        parent->setBalance(0);
                        grandParent->setBalance(0);
                        node->setBalance(0);
                    }
                    if(node->getBalance() == 1){
                        parent->setBalance(-1);
                        grandParent->setBalance(0);
                        node->setBalance(0);
                    }
                    std::cout << (int) grandParent->getBalance() << " " << (int)parent->getBalance() << std::endl;
                    return;


                }else if(parent->getLeft() == node){ //zig-zig
                    rotateRight(grandParent, parent, node);
                    parent->setBalance(0);
                    grandParent->setBalance(0);
                    return;
                }

            }
            
            
        }else if(grandParent->getRight() == parent){
            grandParent->updateBalance(1);

            
            if(grandParent->getBalance() == 1){
                
                return insert_fix(grandParent, parent);
            }
            if(grandParent->getBalance() == 0){
               
                return;

            }
            if(grandParent->getBalance() == 2){ 

                std::cout << (int) grandParent->getBalance() << " " << (int)parent->getBalance() << std::endl;

                

                if(parent->getLeft() == node){ //zig-zag
                    std::cout << (int) grandParent->getBalance() << " " << (int)parent->getBalance() << std::endl;
                    rotateRight(parent, node, NULL);
                    std::cout << (int) grandParent->getBalance() << " " << (int)parent->getBalance() << std::endl;
                    rotateLeft(grandParent, node, parent);
                    

                    if(node->getBalance() == -1){
                        parent->setBalance(0);
                        grandParent->setBalance(-1);
                        node->setBalance(0);
                    }
                    if(node->getBalance() == 0){
                        parent->setBalance(0);
                        grandParent->setBalance(0);
                        node->setBalance(0);
                    }
                    if(node->getBalance() == 1){
                        parent->setBalance(1);
                        grandParent->setBalance(0);
                        node->setBalance(0);
                    }
                    return;
                }else if(parent->getRight() == node){ //zig-zig
                    rotateLeft(grandParent, parent, node);
                    parent->setBalance(0);
                    grandParent->setBalance(0);
                    return;



                }
            }
            
        }


    }
}

template<class Key, class Value>
void AVLTree<Key, Value>::insert (const std::pair<const Key, Value> &new_item)
{
    // TODO
    AVLNode<Key, Value>* newNode;
    AVLNode<Key, Value>* temp = (AVLNode<Key,Value>*)(this->root_);
    if(this->root_ == NULL)
    {
        
        newNode = new AVLNode<Key,Value>(new_item.first, new_item.second, temp);
        this->root_ = newNode;
        //newNode->setBalance(0);
        return;
    }
    else
    { 
        
        while((temp->getRight() != NULL) || (temp->getLeft() != NULL))
        {
            if(temp->getRight() != NULL){
                temp = temp->getRight();
            }
            if(temp->getLeft() != NULL){
                temp = temp->getLeft();
            }
        }
        if(new_item.first < temp->getKey())
        {
            //std::cout << "f" << std::endl;
            newNode = new AVLNode<Key,Value>(new_item.first, new_item.second, temp);
            temp->setLeft(newNode);
            newNode->setBalance(0);
            if(temp->getBalance() == -1){
                temp->setBalance(0);
            }else if(temp->getBalance() == 1){
                temp->setBalance(0);
            }else if(temp->getBalance() == 0){
                temp->setBalance(-1);
                insert_fix(temp, newNode);
            }
        }
        else if(new_item.first > temp->getKey())
        {
            
            newNode = new AVLNode<Key,Value>(new_item.first, new_item.second, temp);
            temp->setRight(newNode);
            newNode->setBalance(0);
            if(temp->getBalance() == -1){
                temp->setBalance(0);
            }else if(temp->getBalance() == 1){
                temp->setBalance(0);
            }else if(temp->getBalance() == 0){
                temp->setBalance(1);
                std::cout << "a" << std::endl;
                insert_fix(temp, newNode);
            }
        }



    }
}

template<class Key, class Value>
void AVLTree<Key, Value>:: remove(const Key& key)
{
    // TODO
}

template<class Key, class Value>
void AVLTree<Key, Value>::nodeSwap( AVLNode<Key,Value>* n1, AVLNode<Key,Value>* n2)
{
    BinarySearchTree<Key, Value>::nodeSwap(n1, n2);
    char tempB = n1->getBalance();
    n1->setBalance(n2->getBalance());
    n2->setBalance(tempB);
}


#endif