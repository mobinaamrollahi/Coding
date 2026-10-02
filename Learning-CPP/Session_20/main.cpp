#include "date.h"
int main(){
	Date today = Date(25, 9, 2025);
	Date d(25, 28, 2026);
	today.add_year(5);
	today.add_month(1);
	return 0;
}
