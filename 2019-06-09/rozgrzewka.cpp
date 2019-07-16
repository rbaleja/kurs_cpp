// przyjmij 2 liczby, a i b, i wypisz informację czy a jest podzielne przez b

#include <iostream>

int main()
{
	int a, b;
	std::cin >> a;
	std::cin >> b;
	
	if (a % b == 0)
	{
		std::cout << "TAK" << std::endl;
	}
	else
	{
		std::cout << "NIE" << std::endl;
	}
	
	return 0;
}
