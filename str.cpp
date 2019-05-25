#include <iostream>
#include <stdexcept>
#include <cstring>
#include "str.h"

using namespace std;

// Add your implementations here.
Str::Str(){

	data_ = new char(1);
	*data_ = "";
}
/*Str(const char* s){

	if(*s == NULL){
		*s = '\n';

	}
}
Str& operator=(const char* s){
	if(*s == NULL){
		*s = "";
	}
}
Str& operator+=(const Str& s){
	strcpy(*data_, s);
	return data_;
}
*/
Str& operator+=(const char* s){
	char* temp = data_;
	data_ = new char(strlen(data_)+strlen(s)+1);
	*data_ = *temp + *s;
	return data_;
}
/*
size_t size() const{
	return strlen(*data_);
}
char& operator[](unsigned int i){
	if(i > strlen(*data_)){
        cout << "std::out_of_range" << endl;
        return 0;
    }else{
        return data_[i];
    }
}
char const & operator[](unsigned int i) const{

}
Str operator+(const char* rhs  ) const{
	if(rhs == NULL){
		return rhs;
	}
}

std::istream& operator>>(std::istream& istr, Str& s)
{
  std::string stemp;
  istr >> stemp;
  s = stemp.c_str();
  return istr;
}
*/