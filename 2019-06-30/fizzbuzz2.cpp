// wypisz liczby 1-100, ALE:
// jeśli liczba jest podzelna przez 3 to wypisz "Fizz"
// jeśli liczba jest podzelna przez 5 to wypisz "Buzz"

// wersja rozszerzona
// jeśli liczba jest podzelna przez 7 to wypisz "Prrt"

#include <iostream>

int main()
{
	for (int i = 1; i <= 120; i++)
	{
		bool czy_cos_wypisalem = false;
		
		if (i % 3 == 0) {
			czy_cos_wypisalem = true;
			std::cout << "Fizz";
		}
		if (i % 5 == 0) {
			czy_cos_wypisalem = true;
			std::cout << "Buzz";
		}
		if (i % 7 == 0) {
			czy_cos_wypisalem = true;
			std::cout << "Prrt";
		}
		
		if (!czy_cos_wypisalem)
			std::cout << i;
		
		std::cout << std::endl;
	}
	return 0;
}
