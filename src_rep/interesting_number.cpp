// InterestingNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <chrono>
using std::to_string; using std::string; using std::reverse;
using std::vector; using std::cout; using namespace std::chrono;

constexpr int first = 8 * 1'401;
constexpr int last = 1'000'000'000;
constexpr int step = 1'401;
/*
* predicates
*/
constexpr bool is_divided_by_1401(int n);
bool is_palindrome(const string& s);
bool check_digits(int n);
bool is_interesting(int n);

int main()
{
    vector<int> interesting;
    auto t0 = high_resolution_clock::now();
    for (int i = first; i <= last; i += step) {
        if (is_interesting(i))
            interesting.push_back(i);
    }
    auto t1 = high_resolution_clock::now();
    int i = 0;
    for (const auto elem : interesting)
        cout << ++i << '.' << '\t' << elem << '\n';
    cout << "took " << duration_cast<milliseconds>(t1 - t0).count() << " ms" << '\n';
}

inline constexpr bool is_divided_by_1401(int n)
{
    return n % 1'401 == 0;
}

bool is_palindrome(const string& s)
{
    string ss = s;
    reverse(ss.begin(), ss.end());
    return s == ss;
}

bool check_digits(int n)
{
    auto n_as_str = to_string(n);
    
    auto b = n_as_str.size() % 2 == 1; // number of digits should be odd
    if (!b)
        return false;
    b = n_as_str[n_as_str.size() / 2] == '0'; // the middle digit should be zero
    if (!b)
        return false;

    b = is_palindrome(n_as_str);

    return b;
}

bool is_interesting(int n)
{
    return is_divided_by_1401(n) && check_digits(n);
}
