#include<string>
#include<vector>

struct Phonebook_Entry
{
	std::string firstname, lastname;
	std::string number;
	std::string address;
	std::string zipcode;
};

std::vector<Phonebook_Entry> phone_book;

int main()
{
	Phonebook_Entry mobina = {"Mobina", "Amrollahi", "515-715-7865", "2706, Kent Ave.", "50010"};
	Phonebook_Entry alexander = {"Alexander", "Goldman", "916-860-9550", "4315, Mary Copa Ave.", "95628"};
	Phonebook_Entry alexander_2 = {.lastname{"Goldman"}, .firstname{"Alexander"}, 
				.number{"916-860-9550"}, .address{"4315, Mary Copa Ave."}, .zipcode{"95628"}};
	return 0;
}
