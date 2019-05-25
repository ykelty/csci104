#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main (int argc, char * argv[]){
	int total;

	ifstream ifile;
	ofstream ofile;
	ifile.open(argv[1]);
	ofile.open(argv[2]);
	ifile >> total;
	int *numbers = new int[total];

	for(int i = 0; i < total; i++){

		ifile >> numbers[i];

	}


	for(int i = 0; i < total/2; i++){

		ofile << numbers[i]+numbers[total-1-i] << endl;

	}
	if(total%2 != 0){

		ofile << 2*numbers[(total/2)] << endl;
		
	}
	delete [] numbers;

}