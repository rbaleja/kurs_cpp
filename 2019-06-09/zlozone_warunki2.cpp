// 1. sprawdz czy liczba x jest w przedziale [3, 10)
// 2. sprawdz czy rok x jest przestępny

#include <iostream>

int main()
{
	int x;
	std::cin >> x;
	
	if (x >= 3 && x < 10)
	{
		std::cout << "x jest z przedzialu [3, 10)\n";
	}
	
	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
	{
		std::cout << "Rok " << x << " jest przestepny.\n";
	}
	
	return 0;
}
