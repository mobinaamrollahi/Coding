#include <array>
#include <string>
#include <iostream>

using std::array; using std::string; using std::cout; using std::boolalpha;
using std::noboolalpha;
array<string, 10> languages = { "C", "C++", "D", "Python", "C#", "Go", "Rust", "Java", "Javascript", "R" };

bool find1(const string&); // implementation #1
bool find2(const string&); // implementation #2

int main()
{
	auto b1 = find1("Rust");
	auto b2 = find2("go");
	cout << boolalpha << b1 << '\n';
	cout << noboolalpha << b2 << '\n';

	return 0;
}

bool find1(const string& s)
{
	for (const auto& lang : languages)
		if (lang == s)
			return true;

	return false;
}

bool find2(const string& s)
{
	bool found{ false };
	for (int i = 0; i < languages.size() && !found; ++i) {
		if (languages[i] == s)
			found = true;
	}

	return found;
}
