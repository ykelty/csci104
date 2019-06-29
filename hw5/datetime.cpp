#include <iostream>
#include <ctime>
#include "datetime.h"


using namespace std;

DateTime::DateTime(){
	time_t rawtime;
	struct tm * timeinfo;
	time (&rawtime);
	timeinfo = localtime(&rawtime);

	hour = timeinfo->tm_hour;
	min = timeinfo->tm_min;
	sec = timeinfo->tm_sec;
	year = timeinfo->tm_year;
	month = timeinfo->tm_mon;
	day = timeinfo->tm_mday;

}

DateTime::DateTime(int hh, int mm, int ss, int year, int month, int day){
	this->hour = hh;
	this->min = mm;
	this->sec = ss;
	this->year = year;
	this->month = month;
	this->day = day;
}

bool DateTime::operator<(const DateTime& other) const{
	if(year < other.year){
		return true;
	}else if(month < other.month && year == other.year){
		return true;
	}else if(day < other.day && year == other.year && month == other.month){
		return true;
	}else if(hour < other.hour && year == other.year && month == other.month && day == other.day){
		return true;
	}else if(min < other.min && year == other.year && month == other.month && day == other.day && hour == other.hour){
		return true;
	}else if(sec < other.sec && year == other.year && month == other.month && day == other.day && hour == other.hour && min == other.min){
		return true;
	}else{
		return false;
	}

}	



