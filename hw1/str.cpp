#include <iostream>
#include <stdexcept>
#include <cstring>
#include "str.h"
#include <stdexcept> 

using namespace std;

// Add your implementations here.
Str::Str(){

	data_ = new char(1);
	*data_ = NULL;

}
Str::Str(const Str& rhs){
	data_ = new char(strlen(rhs.data_) + 1);
	data_ = strcpy(data_,rhs.data_);

}
Str::Str(const char* s){

	if(s == nullptr){
		data_ = new char(1);
		*data_ = NULL;
	}else{
		
		data_ = new char(strlen(s)+1);
		data_ = strcpy(data_,s);
		
	}
}



Str& Str::operator=(const char* s){
	
	data_ = new char(strlen(s)+1);
	if(s == nullptr){
		*data_ = NULL;
		return *this;
	}else{
		 data_= strcpy(data_,s);
		 return *this;
	}
}

Str& Str::operator+=(const Str& s){
	cout << "data= " << data_ << endl; 
	Str temp;
	strcpy(temp.data_, data_);
	data_ = new char(strlen(data_)+strlen(s.data_)+1);
	strcat(temp.data_, s.data_);
	strcpy(data_,temp.data_);
	cout << "data= " << data_ << endl; 
	return *this;
}

Str& Str::operator+=(const char* s) {
	cout << "data= " << data_ << endl; 
	Str temp;
	strcpy(temp.data_, data_);
	data_ = new char(strlen(data_)+strlen(s)+1);
	strcat(temp.data_ , s);
	strcpy(data_,temp.data_);
	cout << "data= " << data_ << endl; 
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
	temp.data_ = new char(strlen(data_) + strlen(rhs) + 1);
	
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
	temp.data_ = new char(strlen(data_) + strlen(other.data_) + 1);
	
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
