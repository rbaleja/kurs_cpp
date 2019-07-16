#include <iostream>
#include <string>

int ile_a(const std::string& s);

int main()
{
	std::string s;
	
	// przyjęcie całego wiersza (uwaga na znaki nowej linii z poprzedniego cin):
	std::getline(std::cin, s);
	
	
	std::string napis = "inny napis";
// 	std::cin >> napis;
// 	const char* napis = "jakis napis";
	napis[3] = 'a';
	napis += " i cos jeszcze";
	std::cout << napis << std::endl;
	std::cout << napis[3] << std::endl;
	std::cout << napis.length() << std::endl;
	for (unsigned i = 0; i < napis.length(); i++)
	{
		std::cout << napis[i] << std::endl;
	}
	return 0;
}
