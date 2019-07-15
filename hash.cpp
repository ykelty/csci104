#include "hash.h"
using namespace std;

unsigned int calculateHash(string mystring)
{
  /* add your code here */
	int size = mystring.size();
	unsigned long long newPassword;
	for(int i = size - 1; i >= 0; i++){
		newPassword *= 128;
		newPassword += mystring[i]; 
	}


	int leastSignificant = newPassword % 65521;
	int second = (newPassword / 65521) % 65521;
	int third = ((newPassword/65521)/65521) % 65521 ;
	int fourth = (((newPassword/65521)/65521)/65521) % 65521;

	unsigned int myArray<4> = {w1, w2 , w3 , w4};

	unsigned int password = (45912 * w1 + 35511 * w2 + 65169 * w3 + 4625 * w4) % 65521;
	std::cout << password << std::endl;

}

int main(){

	calculateHash("cab");
}
