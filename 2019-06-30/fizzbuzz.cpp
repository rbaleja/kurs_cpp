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
		if (i % 3 == 0 && i % 5 == 0)
			std::cout << "FizzBuzz" << std::endl;
		else if (i % 3 == 0)
			std::cout << "Fizz" << std::endl;
		else if (i % 5 == 0)
			std::cout << "Buzz" << std::endl;
		else
			std::cout << i << std::endl;
	}
	return 0;
}
