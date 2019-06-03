#include <set>
#include <string>
#include "setops.h"
using namespace std;


set<string> operator&(const set<string>& s1, const set<string>& s2){

	set<string> s3;
	s3.clear();
	for(set<string>::iterator it=s1.begin(); it != s1.end(); ++it){
		if(s2.find(*it) != s2.end()){
			s3.insert(*it);
		}
	}
	return s3;
}


set<string> operator|(const set<string>& s1, const set<string>& s2){

	set<string> s3;
	s3 = s1;

	for(set<string>::iterator it=s2.begin(); it != s2.end(); ++it){
		
		if(s3.find(*it) == s3.end()){
			s3.insert(*it);
		}
	}
	return s3;
}


set<string> operator-(const set<string>& s1, const set<string>& s2){

	set<string> s3;
	s3 = s1;
			
	for(set<string>::iterator it=s1.begin(); it != s1.end(); ++it){
		
		if(s2.find(*it) != s2.end()){
			s3.erase(*it);
		}
	}			
	return s3;
}


