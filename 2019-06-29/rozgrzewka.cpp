// sprawdz czy liczba n jest doskonala, tzn. czy suma jej dzielników (< n) jest jej równa
#include <iostream>


int main()
{
	int n;
	int suma = 0;
	std::cin >> n;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0) // n podzielne przez i
		{
			suma += i;
		}
	}
	
	std::cout << "Suma dzielnikow: " << suma << std::endl;
	if (n == suma)
		std::cout << "Liczba doskonala!" << std::endl;
	
	return 0;
}
