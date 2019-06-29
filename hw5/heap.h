#ifndef HEAP_H
#define HEAP_H
#include <functional>
#include <stdexcept>
#include <vector>

template <typename T, typename PComparator = std::less<T> >
class Heap
{
 public:
  /// Constructs an m-ary heap for any m >= 2
  Heap(int m, PComparator c = PComparator());

  /// Destructor as needed
  ~Heap();

  /// Adds an item
  void push(const T& item);

  /// returns the element at the top of the heap 
  ///  max (if max-heap) or min (if min-heap)
  T const & top() const;

  /// Removes the top element
  void pop();

  /// returns true if the heap is empty
  bool empty() const;



 private:
  /// Add whatever helper functions and data members you need below
  std::vector<T> items;
  void trickleUp(int loc);
  void heapify(size_t loc, size_t effsize);
  int m;
  PComparator c;


};

// Add implementation of member functions here
template <typename T, typename PComparator >
Heap<T, PComparator>::Heap(int m, PComparator c){
  this->m = m;
  this->c = c;
}

template <typename T, typename PComparator >
Heap<T, PComparator>::~Heap(){
    
}

template <typename T, typename PComparator >
void Heap<T, PComparator>::push(const T& item){
    items.push_back(item);
    trickleUp(items.size()-1);
}

template <typename T, typename PComparator>
void Heap<T, PComparator>::trickleUp(int loc){

  int parent = loc/2;
  while(parent >= 1 && items[loc] < items[parent] ) 
  { 
      std::swap(items[parent], items[loc]);
      loc = parent;
      parent = loc/2;
  }
}

template <typename T, typename PComparator>
void Heap<T, PComparator>::heapify(size_t loc, size_t effsize)
{
  for(int i = loc; i > 0; i--){
    T temp;
    if(items[loc] > items[loc*2]){
      temp = items[loc];
      items[loc] = items[loc*2];
      items[loc*2] = temp;
    }
    if(items[loc] > items[loc*2 + 1]){
      temp = items[loc];
      items[loc] = items[loc*2 + 1];
      items[loc*2 + 1] = temp;
    }
  }
}



// We will start top() for you to handle the case of 
// calling top on an empty heap
template <typename T, typename PComparator>
T const & Heap<T,PComparator>::top() const
{
  // Here we use exceptions to handle the case of trying
  // to access the top element of an empty heap
  if(empty()){
    throw std::logic_error("can't top an empty heap");
  }
  // If we get here we know the heap has at least 1 item
  // Add code to return the top element

  return items[1];

}




// We will start pop() for you to handle the case of 
// calling top on an empty heap
template <typename T, typename PComparator>
void Heap<T,PComparator>::pop()
{
  if(empty()){
    throw std::logic_error("can't pop an empty heap");
  }

  items[1] = items.back();
  items.pop_back();
  heapify(1, items.size());



}





#endif

