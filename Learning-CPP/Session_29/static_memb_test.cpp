#include <iostream>
class Date {
	int day_, month_, year_;	
	static Date default_date;
public:
	Date (int d = 0, int m = 0, int y = 0) {
		day_ = (d != 0) ? d : default_date.day_;
		month_ = (m != 0) ? m : default_date.month_;
		year_ = (y != 0) ? y : default_date.year_;
	}
	void print()
	{
		std::cout << day_ << '/' << month_ << '/' << year_ << '\n';
	}
	static void set_default(int /* day */, int /* month */, int /* year */);
};
void Date::set_default(int day, int month, int year){
	default_date = Date(day, month, year);
}
Date Date::default_date{1, 1, 1970};
int main()
{
	Date my_birthday{20, 3, 2000};
	Date today;
	my_birthday.print();
	today.print();
	Date::set_default(25, 12, 2000);
	Date another_today;
	another_today.print();
	return 0;
}
