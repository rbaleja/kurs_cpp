// napisz funkcję, która sprawdzi czy napis jest palindromem
// np. kajak, sedes, abba
#include <iostream>
#include <string>

//funkcja sprawdzająca czy s jest palindromem
bool czyPalindrom(const std::string& s)
{
	for (int i = 0; i < s.length() / 2; i++)
	{
// 		if (s.at(i) == s.at(s.length() - i - 1))
		if (s[i] != s[s.length() - i - 1])
			return false;
	}
	return true;
}

int main()
{
	std::string napis;
	std::cin >> napis;
	if (czyPalindrom(napis))
		std::cout << "palindrom" << std::endl;
	else
		std::cout << "niepalindrom" << std::endl;
	return 0;
}

