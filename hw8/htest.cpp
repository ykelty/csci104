#include <iostream>
#include <vector>
#include <string>
#include "heap.h"

using namespace std;
void printAll(Heap<int> h, string message)
{

	cout << message << endl;
	while(!(h.empty())){
		cout << h.top() << endl;
		h.pop();
	}
}
int main(){
	Heap<int> test(2, less<int>());

	test.push(2);
	test.push(1);
	test.push(7);
	test.push(4);
	test.push(8);
	test.push(6);
	printAll(test, "Original");
	test.pop();
	
	test.decreaseKey(8, 15);
	printAll(test, "Original");

	return 0;



}