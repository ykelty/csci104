#include <iostream>
#include "datetime.h"


using namespace std;

Datetime::Datetime(){
	hour = 0;
	min = 0;
	sec = 0;
	year = 0;
	month = 0;
	day = 0;

}

Datetime::Datetime(int hh, int mm, int ss, int year, int month, int day){
	hour = hh;
	min = mm;
	sec = ss;
	year = year;
	month = month;
	day = day;
}

bool Datetime::operator<(const DateTime& other) const{
	if(year < other->year){
		return true;
	}else if(month < other->month && year == other->year){
		return true;
	}else if(day < other->day && year == other->year && month == other->month){
		return true;
	}else if(hour < other->hour && year == other->year && month == other->month && day == other->day){
		return true;
	}else if(min < other->min && year == other->year && month == other->month && day == other->day && hour == other->hour){
		return true;
	}else if(sec < other->sec && year == other->year && month == other->month && day == other->day && hour == other->hour && min == other->min){
		return true;
	}else{
		return false;
	}

}	

friend std::ostream& operator<<(std::ostream& os, const DateTime& other){
	os<< other.year << "-" << other.month << "-" << other.day << " " << other.hour << ":" << other.min << ":" << sec;
}

friend std::istream& operator>>(std::istream& is, DateTime& dt){
	is >> dt.year >> dt.month >> dt.day >> dt.hour >> dt.min >> dt.sec;
}

