#include "hash.h"
#include <iostream>
using namespace std;

unsigned int calculateHash(string mystring)
{
  /* add your code here */
	int size = mystring.size();
	unsigned long long newPassword = 0;

	for(int i = 0; i < size; i++)
	{
		
		newPassword = (int)mystring[i] + (128*newPassword); 
	}

	std::cout << "Value after multiplying each character by some power of 128: " << newPassword << std::endl;
	
	unsigned int w4 = newPassword % 65521;
	unsigned int w3 = (newPassword / 65521) % 65521;
	unsigned int w2= ((newPassword/65521)/65521) % 65521 ;
	unsigned int w1 = (((newPassword/65521)/65521)/65521) % 65521;
	
	
	unsigned int myArray[4] = {w1, w2 , w3 , w4};

	unsigned int password = (45912 * w1 + 35511 * w2 + 65169 * w3 + 4625 * w4) % 65521;
	std::cout <<  "w1 = " << w1 << std::endl;
	std::cout << "w2 = " << w2 << std::endl;
	std::cout << "w3 = "<< w3 << std::endl;
	std::cout << "w4 = "<< w4 << std::endl;
	std::cout << "Final Hash: "<< password << std::endl;
	return password;

}
/*
int main(int argc, char *argv[]){
	calculateHash(argv[1]);
}
*/
