#include <iostream>

// przyjmij liczbe n
// przyjmij n liczb calkowitych
// wypisz ich sume

// 3
// 4 5 6
// 
// suma: 15
int main()
{
	int n, suma = 0;
	std::cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int liczba;
		std::cin >> liczba;
		suma += liczba;
	}
	
	std::cout << "Suma to: " << suma << std::endl;
	return 0;
}
