#include <iostream>

// wypisz liczby od 0 do n (podane przez uzytkownika)

int main()
{
	int limit;
	std::cin >> limit;
	
	
	for (int x = 0; x < limit; x++)
	{
		if (x == 2)
		{
			continue;
		}
		
		std::cout << x << std::endl;
		if (x == 7)
			break;
	}
	
	std::cout << "koniec" << std::endl;
	return 0;
}
