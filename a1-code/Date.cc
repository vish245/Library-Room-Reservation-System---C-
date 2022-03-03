
#include "Date.h"

Date::Date(){
	setDate(1901,1,1);
	setHours(1);
	setDuration(1);
}

Date::Date(int y, int m, int d, int h, int dur){
	setDate(y,m,d);
	setHours(h);
	setDuration(dur);
}

//setters
void Date::setDay(int d){
	int max = getMaxDay();
	if (d>max) d=max;
	if (d<1) d=1;
	day = d;
}

void Date::setMonth(int m){
	if (m > 12) m = 12;
	if (m < 1) m = 1;
	month = m;
}

void Date::setYear(int y){
	if (y < 1901) y = 1901;
	year = y;
}

void Date::setDate(int y, int m, int d){
	setMonth(m);
	setDay(d);
	setYear(y);
}

void Date::setDate(Date& d){
	setDate(d.year, d.month, d.day);
}

void Date::setHours(int h) {
	hour = h;
}

void Date::setDuration(int d) {
	if ((d >= 1) && (d <= MAX_ALLOWABLE_DURATION)) {
		duration = d;
	}
	else {
		duration = 0;
	}
}

//getters
int Date::getDay(){ return day; }
int Date::getMonth(){ return month; }
int Date::getYear(){ return year; }
const string& Date::getMonthName(){return months[month-1];}
int Date::getHours() { return hour; }
int Date::getDuration() { return duration; }


//other

bool Date::lessThan(Date& d){
	if (year == d.year){
		if (month == d.month){
			return day < d.day;
		}else{
			return month  < d.month;
		}
	}else{
		return year < d.year;
	}	
}

bool Date::overlaps(Date& d) {

	// if it starts at same year date month and time
	if (d.year == year && d.month == month && d.day == day && d.hour == hour) {
		return true;
	}
	if (d.hour > hour) {
		if ((d.year == year && d.month == month) && (d.day == day && ((d.hour - hour) < duration))) {
			return true;
		}
	}
	else {
		if ((d.year == year && d.month == month) && (d.day == day) && (((hour - d.hour) < d.duration))) {
			return true;
	}

	}

	return false;

}

void Date::print(){
	cout << getMonthName()<<" "<<getDay()<<", "<<getYear() << ". Booking Information: " << endl;
	if (duration == 1) {
		cout << "\tBooking at "<< hour << " hours and for duration " << getDuration() << " hour."<< endl;
	}
	else {
		cout << "\tBooking at "<< hour << " hours and for duration " << getDuration() << " hours."<< endl;
	}
}

int Date::getMaxDay(){
	switch(getMonth()){
		case 4:
		case 6:
		case 9:
		case 11: 			return 30;
		case 2:				return 28;
		default:			return 31;
	}
}

