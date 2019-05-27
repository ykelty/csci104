#include <iostream>
#include <stdexcept>
#include <cstring>
#include "str.h"
#include <stdexcept> 

using namespace std;

// Add your implementations here.
Str::Str(){
	data_ = new char(1);
	*data_ = '\0';

}

Str::Str(const Str& rhs){
	int len = strlen(rhs.data_) + 1 ;
	data_ = new char(len);
	data_ = strcpy(data_,rhs.data_);

}

Str::Str(const char* s){

	if(s == nullptr){
		data_ = new char(1);
		*data_ = '\0';
	}else{
		int len = strlen(s)+1;
		data_ = new char(len);
		data_ = strcpy(data_,s);
	}

}



Str& Str::operator=(const char* s){
	int len = strlen(s)+1;
	data_ = new char(len);
	if(s == nullptr){
		*data_ = '\0';
		return *this;
	}else{
		 data_= strcpy(data_,s);
		 return *this;
	}

}

Str& Str::operator+=(const Str& s){
	
	Str temp;
	strcpy(temp.data_, data_);
	int len = strlen(data_)+strlen(s.data_)+1;
	data_ = new char(len);
	strcat(temp.data_, s.data_);
	strcpy(data_,temp.data_);
	return *this;

}

Str& Str::operator+=(const char* s) {
	
	Str temp;
	strcpy(temp.data_, data_);
	int len = strlen(data_)+strlen(s)+1;
	data_ = new char(len);
	strcat(temp.data_ , s);
	strcpy(data_,temp.data_);
	return *this;

}

size_t Str::size() const{

	return strlen(data_);
}

char& Str::operator[](unsigned int i){

	if(i > strlen(data_)){
        throw std::out_of_range("Index is out of range");
    }else{
        return data_[i];
    }

}

char const & Str::operator[](unsigned int i) const{

	if(i > strlen(data_)){
        throw std::out_of_range("Index is out of range");
    }else{
        return data_[i];
    }

}

Str Str::operator+(const char* rhs  ) const{
	
	Str temp;
	int len = strlen(data_) + strlen(rhs) + 1;
	temp.data_ = new char(len);
	
	if(rhs == nullptr){
		return *this;
	}else{
		
		strcpy(temp.data_,data_);
		
		temp.data_ = strcat(temp.data_ , rhs);
		
		return temp;
	}

}
Str Str::operator+(const Str& other) const{

	Str temp;
	int len = strlen(data_) + strlen(other.data_) + 1;
	temp.data_ = new char(len);
	
	if(other.data_ == nullptr){
		return *this;
	}else{
		strcpy(temp.data_, data_);
		temp.data_ = strcat(temp.data_ , other.data_);
		return temp;	
	}

}


bool Str::operator==(const Str &rhs){

	if(*data_ == *rhs.data_){
		return true;
	}else{
		return false;
	}


}
bool Str::operator!=(const Str &rhs){

	if(*data_ == *rhs.data_){
		return false;
	}else{
		return true;
	}

}

bool Str::operator<(const Str &rhs){

	if(*data_ < *rhs.data_){
		return true;
	}else{
		return false;
	}

}

bool Str::operator>(const Str &rhs){

	if(*data_ > *rhs.data_){
		return true;
	}else{
		return false;
	}

}



std::ostream& operator<<(std::ostream& os, Str s){

	os << s.data_;	
	return os;
}



std::istream& operator>>(std::istream& istr, Str& s)
{
  std::string stemp;
  istr >> stemp;
  s = stemp.c_str();
  return istr;
}
