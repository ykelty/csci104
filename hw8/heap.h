#ifndef HEAP_H
#define HEAP_H

#include <vector>
#include <functional>
#include <utility>
#include <algorithm>
#include <stdexcept>
#include <unordered_map>

template <
         typename T,
         typename KComparator = std::equal_to<T>,
         typename PComparator = std::less<T>,
         typename Hasher = std::hash<T> >
class Heap
{
public:
    /// Constructs an m-ary heap. M should be >= 2
    Heap(int m = 2,
         const PComparator& c = PComparator(),
         const Hasher& hash = Hasher(),
         const KComparator& kcomp = KComparator()  );

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

    /// decreaseKey - Finds key matching old object &
    /// updates its location in the heap based on the new value
    void decreaseKey(const T& old, const T& newVal);

 private:
    /// Add whatever helper functions and data members you need below
    void trickleUp(int loc);
    void heapify(int loc, int effsize);


 private:
   /// Data members - These should be sufficient
    std::vector< T > store_;
    int m_;
    PComparator c_;
    std::unordered_map<T, size_t, Hasher, KComparator> keyToLocation_;

};

// Complete!
template <typename T, typename KComparator, typename PComparator, typename Hasher >
Heap<T,KComparator,PComparator,Hasher>::Heap(
    int m,
    const PComparator& c,
    const Hasher& hash,
    const KComparator& kcomp ) :

    store_(),
    m_(m),
    c_(c),
    keyToLocation_(100, hash, kcomp)

{

}

// Complete!
template <typename T, typename KComparator, typename PComparator, typename Hasher >
Heap<T,KComparator,PComparator,Hasher>::~Heap()
{

}

// Incomplete!
template <typename T, typename KComparator, typename PComparator, typename Hasher >
void Heap<T,KComparator,PComparator,Hasher>::push( const T& item)
{
    int location = store_.size() - 1;
    store_.push_back(item);
    keyToLocation_.insert(std::make_pair(item, location+1));
    
            /*
            int temp = keyToLocation_[store[i]].second
            keyToLocation_[store[i]].second = keyToLocation_[store[i -1]].second;
            keyToLocation_[store[i -1]].second = temp;
            std::swap(store_[i], store_[i-1]);
            */
    location = location + 1;
    trickleUp(location);

        
    

}

// Incomplete!
template <typename T, typename KComparator, typename PComparator, typename Hasher >
void Heap<T,KComparator,PComparator,Hasher>::decreaseKey(const T& old, const T& newVal)
{
    //std::unordered_map<T, size_t, Hasher, KComparator>::iterator 
    auto it = keyToLocation_.find(old);
    if(it != keyToLocation_.end()){
        //std::cout << it->first << std::endl;
        //std::cout << it->second << std::endl;
        int location = it->second;
        //std::cout << location << std::endl;
        keyToLocation_.erase(it);
        std::cout << store_[location] << std::endl;
        keyToLocation_.insert(std::make_pair(newVal, location));
        store_[location] = newVal;
        std::cout << store_[location] << std::endl;
        //std::cout << newVal << std::endl;
        trickleUp(location);
    }


}

// Complete!
template <typename T, typename KComparator, typename PComparator, typename Hasher >
T const & Heap<T,KComparator,PComparator,Hasher>::top() const
{
    // Here we use exceptions to handle the case of trying
    // to access the top element of an empty heap
    if(empty()) {
        throw std::logic_error("can't top an empty heap");
    }
    // If we get here we know the heap has at least 1 item
    // Add code to return the top element
    return store_[0];
}

// Incomplete!
template <typename T, typename KComparator, typename PComparator, typename Hasher >
void Heap<T,KComparator,PComparator,Hasher>::pop()
{

    if(empty()) {
        throw std::logic_error("can't pop an empty heap");
    }
    /*
    if(store_[1] == store_.back()){
        keyToLocation_.erase(store_[1]);
        store_.pop_back();

    }else{
        int effsize = store_.size();
        heapify(1, effsize);
    }
    */
    store_[0] = store_.back();
    store_.pop_back();
    heapify(0, store_.size());


}

/// Complete!
template <typename T, typename KComparator, typename PComparator, typename Hasher >
bool Heap<T,KComparator,PComparator,Hasher>::empty() const
{
    return store_.empty();
}


template <typename T, typename KComparator, typename PComparator, typename Hasher >
void Heap<T,KComparator,PComparator,Hasher>::trickleUp( int loc) {
    int parent = (loc-1)/m_;
    while(parent >= 0 && c_(store_[loc],store_[parent])) 
    { 
        int temp = keyToLocation_[store_[parent]];
        keyToLocation_[store_[parent]]= keyToLocation_[store_[loc]];
        keyToLocation_[store_[loc]] = temp;
        std::swap(store_[parent], store_[loc]);
        loc = parent;
        parent = (loc - 1)/m_;
    }

}


template <typename T, typename KComparator, typename PComparator, typename Hasher >
void Heap<T,KComparator,PComparator,Hasher>::heapify(int loc, int effsize){

    int parent = loc;
    
    for(int i = 1; i<=m_; i++){
        int child = m_ * loc + i;
        if(child <= effsize){
            if(c_(store_[child], store_[parent])){
                parent = child;
            }
        }
    }
    if(parent != loc){
        int value1 = keyToLocation_[store_[parent]];
        int value2 = keyToLocation_[store_[loc]];
        keyToLocation_[store_[loc]] = value1;
        keyToLocation_[store_[parent]]= value2;
        std::swap(store_[parent], store_[loc]);
        heapify(parent, effsize);
    }

}



#endif