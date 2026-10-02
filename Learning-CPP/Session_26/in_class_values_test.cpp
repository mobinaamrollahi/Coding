#include <string>
#include <iostream>
class Values{
	static const long light_speed = 3e8;
};

struct FinInst{
	std::string market = "Dow";
	std::string symbol;
	FinInst() {}
	FinInst(std::string symb) : symbol{symb} {}
};
int main()
{
	FinInst i1;
	std::cout << i1.market << " and " << i1.symbol << '\n';
	FinInst microsoft("MSFT");
	std::cout << microsoft.market << " and " << microsoft.symbol << '\n';
	return 0;
}
