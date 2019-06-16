#ifndef DEQUE_H
#define DEQUE_H
#include <stdexcept>

/**
 * Implements a templated, array-based, 
 * double-ended queue.
 *
 * The Deque should allow for amortized O(1) 
 * insertion and removal from either end. 
 * It should dynamically resize, when it becomes
 * full, but never needs to shrink.  
 *
 * It should use a circular buffer approach
 * by tracking the "front" and "back" location.
 *
 */


template <class T>
class Deque
{
 public:
  /* START - DO NOT CHANGE ANY OF THESE LINES */
  /**
   *  Default constructor 
   *   Create an array of size 1 by default
   */
  Deque();

  /**
   *  Default constructor 
   *   Create an array of the given capacity.
   */
  Deque(size_t capacity);

  /**
   *  Destructor
   */
  ~Deque();

  /**
   *  Returns the number of elements in the Deque. 
   *   - Must run in O(1)
   */
  size_t size() const;

  /**
   *  returns true if the deque is empty
   *   - Must run in O(1)
   */
  bool empty() const;

  /**
   *  returns  the i-th element from the front
   *   - Must run in O(1)
   *   - Must throw std::range_error if i is
   *      an invalid location
   */
  T& operator[](size_t i);

  /**
   *  returns  the i-th element from the front
   *   - Must run in O(1)
   *   - Must throw std::range_error if i is
   *      an invalid location
   */
  T const & operator[](size_t i) const;

  /**
   *  Inserts a new item at the back of the
   *  Deque
   *   - Must run in amortized O(1)
   */
  void push_back(const T& item);

  /**
   *  Inserts a new item at the front of the
   *  Deque
   *   - Must run in amortized O(1)
   */
  void push_front(const T& item);

  /**
   *  Removes the back item from the Deque
   *   - Must run in amortized O(1)
   *   - Simply return if the deque is empty
   */
  void pop_back();

  /**
   *  Removes the front item from the Deque
   *   - Must run in amortized O(1)
   *   - Simply return if the deque is empty
   */
  void pop_front();



  /* END - DO NOT CHANGE ANY OF THESE LINES */
 private:
  /* Add data members and private helper 
   * functions below 
   */
  T* arr;
  int front;
  int rear;
  int arrSize;
  int capacity;

  
};

/* Implement each Deque<T> member function below 
 * taking care to meet the runtime requirements
 */
template <class T>
Deque<T>::Deque(){
  arrSize = 0;
  front = -1;
  rear = 0;
  capacity = 10;
  arr = new T[10];
}

template <class T>
Deque<T>::Deque(size_t capacity){
  front = -1;
  rear = 0;
  this->capacity = capacity;
  arrSize = 0;
  arr = new T[capacity];
}

template <class T>
Deque<T>::~Deque(){
  delete [] arr;
}


template <class T>
size_t Deque<T>::size() const{
  return arrSize;

}

template <class T>
bool Deque<T>::empty() const{
  
  if(arrSize == 0){
    return true;
  }else{
    return false;
  }
  
  
}

template <class T>
T& Deque<T>::operator[](size_t i){
  return arr[i];
}

template <class T>
T const & Deque<T>::operator[](size_t i) const{
  return arr[i];
}

template <class T>
void Deque<T>::push_back(const T& item){
  

  if(empty()){
    front = 0;
    rear = 0;
    arr[rear] = item;
    arrSize = 1;
  }else if(front >= arrSize - 1){
    
    T* temp = new T[capacity * 2];
    
    for(int i = 1; i < arrSize+1; i++){
      temp[i] = arr[i-1];
    }
    delete [] arr;
    capacity = capacity * 2;
    arr = temp;
    front++;
    arr[0] = item;
    arrSize++;
  }else{
    front++;
    T* temp = new T[capacity];
    for(int i = 1; i < arrSize+1; i++){
      temp[i] = arr[i-1];
    }
    delete [] arr;
    arr = temp;
    arr[0] = item;
    arrSize++;
    
  }


  /*
  if(front == -1){
    front = 0;
    rear = 0;

  }
  else if(rear == arrSize -1){
    
    int* temp = new int[2*arrSize];
    for(int i = 0; i < arrSize; i++){
      temp[i] = arr[i];
    }
    arr = *temp;
    rear = rear+1;
    

  }else{
    rear = rear + 1;
  }
  arr[rear] = item;
  */
}

template <class T>
void Deque<T>::push_front(const T& item){
  
  if(empty()){

    front = 0;
    rear = 0;
    arr[front] = item;
    arrSize = 1;

  }else if(front >= arrSize - 1){
    
    T* temp = new T[capacity * 2];
    capacity = capacity * 2;
    
    for(int i = 0; i < arrSize; i++){
      temp[i] = arr[i];
    }

    delete [] arr;
    arr = temp;
    front++;
    arr[front] = item;
    arrSize++;

  }else{

    front++;
    arr[front] = item;
    arrSize++;
    
  }

  /*
  if(front == -1){
    front = 0;
    rear = 0;
  }else if(front == 0){
    front = arrSize - 1;
  }else{
    front = front -1;
  }
  arr[front] = item;
  */
}

template <class T>
void Deque<T>::pop_back(){
  if(empty()){
    return;
  }else if(front == rear){
    front = -1;
    rear = 0;
    T* temp = new T[0];
    delete[] arr;
    arr = temp;
    arrSize--;
  }else{
    front = front - 1;
    T* temp = new T[arrSize-1];
    for(int i = 1; i < arrSize-1; i++){
      temp[i-1] = arr[i];
    }
    delete [] arr;
    arr = temp;
    arrSize--;
  }
  
}

template <class T>
void Deque<T>::pop_front(){
if(empty()){
    return;
  }else if(front == rear){
    front = -1;
    rear = 0;
    T* temp = new T[0];
    delete[] arr;
    arr = temp;
    arrSize--;
  }else{
    front = front - 1;
    T* temp = new T[arrSize-1];
    for(int i = 0; i < arrSize-1; i++){
      temp[i] = arr[i];
    }
    delete [] arr;
    arr = temp;
    arrSize--;
  }
}




  /*
  if(empty()){
    return;
  }
  if(front == rear){
    front = -1;
    rear = -1;
  }else{
    if(front == size - 1){
      front = 0;
    }else{
      front = front + 1;
    }
  }
  arrSize--;

 }
 */




#endif