//przyjmij liczbe n i wypisz sume jej cyfr

// 7421
// 7 + 4 + 2 + 1 = 14
// suma cyfr: 14

#include <iostream>

int main()
{
	int liczba, suma = 0;
	std::cin >> liczba;
	while (liczba > 0)
	{
		std::cout << "dodaje " << liczba % 10 << std::endl;
		suma += liczba % 10;
		liczba /= 10;
	}
	
	std::cout << "Suma cyfr: " << suma << std::endl;
	return 0;
}
