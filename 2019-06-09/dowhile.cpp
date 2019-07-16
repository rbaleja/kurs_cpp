#include <iostream>

int main()
{
	int magicznawartosc = 13;
	int x;
	do
	{
		std::cout << "Podaj wartosc: ";
		std::cin >> x;
	} while (magicznawartosc != x);
	std::cout << "Brawo!" << std::endl;
}
