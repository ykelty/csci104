#ifndef STACK_H
#define STACK_H
#include <stdexcept>
#include "deque.h"

template<class T>
class Stack: 
	private Deque<T>
{
  public:
  	Stack();

   	size_t size() const;

  	bool empty() const;

  	void push(const T& item);

  	void pop();

  	T const & top() const;

  private:
  	int* arr;
  	int topArray;
  
};

template<class T>
Stack<T>::Stack(){
	arr = new int[0];
	
	topArray = -1;

}

template<class T>
size_t Stack<T>::size() const{
	return topArray+1;

}

template<class T>
bool Stack<T>::empty() const{
	if(topArray == -1){
		return true;
	}else{
		return false;
	}

}

template<class T>
void Stack<T>::push(const T& item){
	topArray++;
	
	arr[topArray] = item;

}

template<class T>
void Stack<T>::pop(){
	if(empty()){
		return;
	}else{
		topArray--;
		
	}

}

template<class T>
T const & Stack<T>::top() const{
	if(empty()){
		return;
	}else{
		return arr[topArray];
	}
}
#endif