#include <iostream>
/* 
 */
double grade(double /* midterm */, double /* final */, double /* homework */);

int main()
{
	std::cout << "Enter the grade of midterm, final, and homework: ";
	double m{0}, f{0}, h{0};
	std::cin >> m >> f >> h;
	auto final_grade = grade(m, f, h);
	std::cout << "Student's final grade is: " << final_grade << '\n';

	return 0;
}

double grade(double midterm, double exam, double homework)
{
	auto result = 0.2 * midterm + 0.4 * exam + 0.4 * homework;
	
	return result;
}
