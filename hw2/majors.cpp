#include <map>
#include <set>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "setops.h"
using namespace std;


int main(int argc, char * argv[] ){

	map<string, set<string> > allMajors;

	ifstream ifile;
	ofstream ofile;
	ifstream cmdfile;

	ifile.open(argv[1]);
	cmdfile.open(argv[2]);
	ofile.open(argv[3]);

	string line = "";
	set<string> names;
	while(getline(ifile,line)){
		string name = "";
		set<string> majors;
		string major = "";
		stringstream ss(line);
		int i = 0;
		while(line[i] != ','){ //get name of student
			name += line[i];
			i++;
		}

		for(int j =i+1; j < (int)line.size(); j++){
			if(islower(line[j])){ //change all major characters to uppercase
				
				line[j] = toupper(line[j]);

			}
			if(isspace(line[j])){ //enter major name into major set
				majors.insert(major);
				major = "";
			}else{
				major += line[j];
			}
		}
		majors.insert(major); //enter major name into major set
		
		//Enter names into allMajors map
		for(set<string>::iterator it=majors.begin(); it != majors.end(); ++it){
			
			map<string, set<string> >:: iterator itr = allMajors.find(*it);
			if(itr == allMajors.end()){
				
				names.insert(name);
				allMajors.insert(make_pair(*it, names));
			}else{
				
				itr->second.insert(name);	

			}
		
		}
		names.clear();
		majors.clear();
	


	}
				

	
	
	
	
	
	while(getline(cmdfile, line)){
		
		set<string> s1;
		set<string> s2;
		string major = "";
		stringstream ss(line); 
		int length = 0;
		string word;
		while(ss >> word){
			length++;
		}


		for(int i = 0; i < (int)line.size()-1; i++){

			if(islower(line[i])){
				
				line[i] = toupper(line[i]);
				
			}

			if(isspace(line[i])){
				s1.insert(major);
				major = "";
				length++;
			}else{
				major += line[i];
			}

		}
		s1.insert(major);
		
		
		if(length>2){ //checks for multiple majors
			
			set<string> s3;
			set<string> s4;
			for(map <string, set<string> >::iterator it = allMajors.begin(); it != allMajors.end(); ++it){
				
				s3 = s3 | it->second;
			}

			for(set<string>::iterator itr=s1.begin(); itr != s1.end(); ++itr){

					set<string> s9 = allMajors[*itr];
					s4 = s9 & s3;


			}
			
			
			for(set<string>:: iterator itr = s1.begin(); itr != s1.end(); ++itr){
				ofile << *itr << " ";
			}
			ofile << endl;

			for(set<string>:: iterator itr = s4.begin(); itr != s4.end(); ++itr){
				
				map<string, set<string> >::iterator it = allMajors.find(*itr);
				ofile << *itr << endl;
				set<string> s7 = it->second;
				for(set<string>:: iterator itr2 = s7.begin(); itr2 != s7.end(); ++itr2){
					ofile << *itr2 << endl;
				}
				
			}

			
		
		}else{//just one major

			for(set<string>:: iterator itr = s1.begin(); itr != s1.end(); ++itr){
				
				map<string, set<string> >::iterator it = allMajors.find(*itr);
				if(it != allMajors.end()){
					
					ofile << *itr << endl;
					set<string> s7 = it->second;
					
					for(set<string>:: iterator itr2 = s7.begin(); itr2 != s7.end(); ++itr2){
						//ofile << "hello" << endl;
						ofile << *itr2 << endl;;
						
					}

					s7.clear();
				}else{
					ofile << *itr << endl;
				}
				
				ofile << endl;

			}
			
		}
		s1.clear();
		names.clear();


	}
	ifile.close();
	ofile.close();
	cmdfile.close();

	return 0;
	
}