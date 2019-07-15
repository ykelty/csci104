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

  int parent = (loc-1)/m;
  while(parent >= 0 && c(items[loc],items[parent])) 
  { 
    
      std::swap(items[parent], items[loc]);
      loc = parent;
      parent = (loc - 1)/m;
  }
}

template <typename T, typename PComparator>
void Heap<T, PComparator>::heapify(size_t loc, size_t effsize)
{
    int largest = loc;

    for(int i = 1; i<=m; i++){
      int child = m * loc + i;
      if(child <= effsize && c(items[child], items[largest])){
        largest = child;
      }
    }
    if(largest != loc){
      std::swap(items[largest], items[loc]);
      heapify(largest, effsize);
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

  return items[0];

}




// We will start pop() for you to handle the case of 
// calling top on an empty heap
template <typename T, typename PComparator>
void Heap<T,PComparator>::pop()
{
  if(empty()){
    throw std::logic_error("can't pop an empty heap");
  }

  items[0] = items.back();
  items.pop_back();
  heapify(0, items.size());



}

template <typename T, typename PComparator>
bool Heap<T,PComparator>::empty() const{
    return items.size() == 0;

}



#endif

