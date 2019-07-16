#include <iostream>

// wypisz liczby od 0 do n (podane przez uzytkownika)

int main()
{
	int limit;
	std::cin >> limit;
	
	int x = 0;
	while (x < limit)
	{
		std::cout << x << std::endl;
		x += 1;
	}
	
	std::cout << "koniec" << std::endl;
	return 0;
}
