#include <sstream>
#include <fstream>
#include <iostream>
#include <map>
#include <vector>

using namespace std;


bool isValid(map<string, int> variables, vector<vector<string>> conditionals){
	//bool valid = false;
	/*
	for(map<string, int>::iterator itr = variables.begin(); itr != variables.end(); ++itr){
		cout << itr->second;
	}
	cout << endl;
	*/
	
	int tempSize;
	int count = 0;
	int count2 = 0;
	for(int i =0; i < conditionals.size(); i++){
		for(int j = 0; j < conditionals[i].size(); j++){
			int tempSize = conditionals[i].size();
		
			string temp;
			if(conditionals[i][j][0] = '-'){
				temp = conditionals[i][j][1];
			}else{
				temp = conditionals[i][j];
			}
			map<string, int>:: iterator it = variables.find(temp);
			if(it!=variables.end()){
				if(((it->second == 0)&& ((conditionals[i][j]).front() == '-')) || ((it->second == 1) && ((conditionals[i][j]).front() != '-')))
				{
					
					count++;

				}
			}
			if(count == tempSize){
				//cout << "b" << endl;

				count2++;

			}

		}
		
		
	}

	if(count2 == conditionals.size() - 1){
		int count3 = 0;
		for(map<string, int>::iterator itr = variables.begin(); itr != variables.end(); ++itr){
			if(itr->second == 0){
				count3++;
			}
		}
		if(count3 != 4){
			return true;
		}
	}
	else{
		return false;
	}
	
}

bool solutionExists(map<string,int> variables, vector<vector<string>> clauses, int variableCount, ofstream& ofile)
{
	/*
	for(map<string, int>::iterator itr = variables; itr != variables.end(); ++itr){

	}
	*/
	/*
	map[variableCount] = 0;
	if (isValid(variables, clauses)){
		return true;
	}else{
		solutionExists(variables, clauses, variableCount++)
	}
	*/
	
	if (isValid(variables, clauses)){
		//cout << "VALID" << endl;
		for(map<string, int>::iterator itr = variables.begin(); itr != variables.end(); ++itr){
			ofile << "x" << itr->first << " = " << itr->second<< endl;
		}
		return true;
	}else if(variableCount <= variables.size()){
		/*
		map<string, int>::iterator itr = variables.find(to_string(variableCount));
		if(itr != variables.end()){	
			variables[to_string(variableCount)] = 0;
		}
		*/
		
		
		

		/*
		map<string, int>::iterator it = variables.find(to_string(variableCount));
		if(it != variables.end()){	
			variables[to_string(variableCount)] = 1;
		}
		solutionExists(variables, clauses, ++variableCount);
		*/
		for(int i = 0; i < 2; i++){
			map<string, int>::iterator itr = variables.find(to_string(variableCount));
			if(itr != variables.end()){
				variables[to_string(variableCount)] = i;
				solutionExists(variables, clauses, ++variableCount, ofile);
			}
			//cout << variableCount << endl;
			

		}
		/*
		for(map<string, int>::iterator itr = variables.begin(); itr != variables.end(); ++itr){
			cout << itr->second;
		}
		cout << endl;
		*/
		

	}else{
		//cout << "No Solution" << endl;
	}


}



int main(int argc, char* argv[]){

	ifstream ifile(argv[1]);
	ofstream ofile(argv[2]);
	map<string, int> variables; 
	vector< vector<string> > clauses;
	string line;
	int num_vars;
	int num_clauses;

	while(getline(ifile, line)){

		stringstream ss(line);
		string word;
		ss >> word;
		if(word == "p"){
			string cnf;
			ss >> cnf;
			ss >> num_vars;
			ss >> num_clauses;
		}if(word != "p" && word != "c"){
			vector<string> temp;
			temp.push_back(word);
			string word2;
			while(ss >> word2){
				temp.push_back(word2);
			}
			clauses.push_back(temp);
		}
	}
	
	
	for(int i = 1; i <= num_vars; i++){
		string temp = to_string(i);
		variables.insert(make_pair(temp, 2));
	}

	for(int i =0; i < clauses.size(); i++){
		for(int j = 0; j < clauses[i].size() - 1; j++){
			cout << clauses[i][j];
		}
		cout << endl;
	}

	/*
	for(int i = 0; i < clauses.size(); i++){
		for(int j = 0; j < clauses[i].size(); j++){
			string temp = clauses[i][j];
			if(temp[0] == '-'){
				map<string,int>::iterator it = variables.find(temp[1]);
				it->second = 0;
			}
		}
	}
	*/
	bool valid = false;
	valid = solutionExists(variables, clauses, 1, ofile);

	


}