#pragma once
class Date {
	int day, month, year;
public:
	Date(int d, int m, int y){ // Constructors don't have return type
		day = d; month = m; year = y;
	}
	void add_year(int);
	void add_month(int m){
		month += m;
	}
	void add_day(int);
};

inline void Date::add_day(int d){
	day += d;
}
