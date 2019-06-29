#include <vector>
// heapify() helper function
// loc - Location to start the heapify() process
// effsize - Effective size (number of items in the vector that
//           are part of the heap). Useful for performing heap-sort in place.
template <typename T, typename Comparator >
void heapify(std::vector<T>& data, int loc, int effsize, Comparator& c )
{
	/*
	if(loc*2 > effsize){
		return;
	}

	int smallerChild = 2 * loc;
	if(2*loc+1 <= effsize){
		int rChild = loc *2 + 1;
		if(data[rChild] < data[smallerChild])
		{
			smallerChild = rChild;
		}
	}
	if(data[loc] > data[smallerChild])
	{ 
		std::swap(data[loc], data[smallerChild]); 
		heapify(data, smallerChild, effsize, c);
	}
	*/
	int lChild = 2*loc+1;
	int rChild = 2*loc+1;
	int largest = loc;
	if(lChild < effsize &&  c(data[lChild], data[largest])){
		largest = lChild;
	}
	if(rChild < effsize &&  c(data[rChild], data[largest])){
		largest = rChild;
	}
	if(largest != loc){
		std::swap(data[loc], data[largest]);
		heapify(data, largest, effsize, c);	
	}



}


template <typename T, typename Comparator >
void hsort(std::vector<T>& data, Comparator c = Comparator())

{
	for (int i = (data.size()/ 2)-1; i >= 0; i--) {
        heapify(data, i, data.size(), c); 
	}

	for (int i=data.size()-1; i>=1; i--){
		std::swap(data[0], data[i]);
		heapify(data, 0, i, c); 
		
	} 



}

