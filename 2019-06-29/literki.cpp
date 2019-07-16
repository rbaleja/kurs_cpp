#include <iostream>
#include <string>

int ile_a(const std::string& s)
{
	int licznik = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'a')
			licznik += 1;
	}
	return licznik;
}

int ile_liter(const std::string& s, char znak)
{
	int licznik = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == znak)
			licznik += 1;
	}
	return licznik;
}

int ile_cyfr(const std::string& s)
{
	int licznik = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if ('0' <= s[i] && s[i] <= '9')
			licznik += 1;
	}
	return licznik;
}

int main()
{
	std::string s;
	std::cin >> s;
	int liter_a = ile_liter(s, 'a');
	int liter_b = ile_liter(s, 'b');
	int liter_c = ile_liter(s, 'c');
	std::cout << liter_a << std::endl;
	std::cout << liter_b << std::endl;
	std::cout << liter_c << std::endl;
	std::cout << ile_cyfr(s) << std::endl;
	return 0;
}
