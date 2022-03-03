
#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
const static int MAX_ALLOWABLE_DURATION = 3;

using namespace std;

class Date {
		
	public:
		

		//constructor
		Date();
		Date(int year, int month, int day, int hours, int duration);
		
				
		//setters
		void setDay( int);
		void setMonth(int);
		void setYear(int);
		void setDate(int y, int m, int d);
		void setDate(Date&);
		void setHours(int hours);
		void setDuration(int duraiton);
		
		//getters
		int getDay();
		int getMonth();
		int getYear();
		const string& getMonthName();
		int getHours();
		int getDuration();
		
		//other
		bool lessThan(Date& d);
		bool overlaps(Date& d);
		void print();

	
	private:
		//functions
		int getMaxDay();
	
	
		//variables
		int day;
		int month;
		int year;
		int duration;
		int hour;
		
		
		const string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
		const string smonths[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul","Aug", "Sep", "Oct", "Nov", "Dec"};
	
};
#endif
