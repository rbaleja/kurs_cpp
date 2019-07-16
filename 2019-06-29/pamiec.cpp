#include <iostream>

int main()
{
	int* wskaznik = new int;
	*wskaznik = 5;
	std::cout << *wskaznik << std::endl;
	delete wskaznik;

	wskaznik = new int;
	delete wskaznik;
	
	int* tab = new int[1000000]; //new[]
	
	delete[] tab;
	
	return 0;
}
