#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int total;
ifile.open("input.txt")
ifile >> total;
int numbers[total];

for(int i = 0; i < total; i++){

	file >> numbers[i];

}

for(int i = 0; i < total/2; i++){

	cout << numbers[i]+numbers[total-1-i] << endl;
}
if(total%2 != 0){

	cout << numbers[(total/2)+1] << endl;
	
}