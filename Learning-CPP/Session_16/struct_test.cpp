#include <iostream>
#include <string>
struct Point {
	int x, y;
} center = {0, 0};

struct Student_Info {
	std::string first_name, last_name;
	char middle_initial;
	std::string major;
	std::string address;
	bool us_native;
};

Point p0 = {1, 100};

void print_name(Student_Info);

bool is_US_citizen(Student_Info);
int main() 
{
	Point p1, p2 = {-1, 5};
	p1.x = p2.x;
	std::cout << '(' << p1.x << '\t' << p1.y << ')' << '\n';
	
	Student_Info mobina = {"Mobina", "Boyouki", 'A', "Industrial Engineering", "", false};
	Student_Info alexander;
	// intialization with memeber selection gives freedom
	alexander.first_name = "Alexander";
	alexander.last_name = "Goldman";
	alexander.middle_initial = 'S';
	alexander.major = "IE";
	alexander.us_native = true;
	print_name(alexander);
	if (is_US_citizen(mobina))
		std::cout << "She is American. \n";
	return 0;
}

void print_name(Student_Info si)
{
	std::cout << si.first_name << " " << si.middle_initial << ". " << si.last_name << '\n';	
}

inline bool is_US_citizen(Student_Info si)
{
	return si.us_native;
}
