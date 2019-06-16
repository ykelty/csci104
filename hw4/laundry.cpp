#include "stack.h"
#include <fstream>
#include <sstream>

using namespace std;


int main(int argc, char * argv[]){


	ifstream ifile;
	ifile.open(argv[1]);
	ofstream ofile;
	ofile.open(argv[2]);

	string line;
	getline(ifile, line);

	Stack<int> s;

	stringstream ss(line);
	int number;
	
	while(ss >> number){
		if(number <= 0){
			s.push(number);
		}else{
			for(int i = 0; i < number; i++){
				int val;
				
				val = s.top();

				s.pop();

				if(val == 0){
					ofile << "black";
				}else if(val == -1){
					ofile << "white";
				}
				ofile << " ";
			
			}
			ofile << endl;
		}
		
	}
	
	return 0;

}
