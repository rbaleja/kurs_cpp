#include <iostream>

int main()
{
	const int N = 5;
	int z = 10;
	int x = 5;
	int& y = x; // referencja
	const int& const_ref = x; //const referencja
	y = 7;
	std::cout << x << std::endl;
	
	int* px = nullptr;
	const int* cpx = nullptr; //wskaznik na stala zawartosc
	int* const pcx = &x; //staly wskaznik na zwartosc
	const int* const cpcx = &x; //staly wskaznik na stala zwartosc
	px = &x; // &zmienna zwraca adres zmiennej
	*px = 17; //*wskaźnik zwraca wartość znajdującą się pod wskaźnikiem
	
	std::cout << "Adres x: " << px << std::endl;
	std::cout << *px << std::endl;
	std::cout << "Wartosc x: " << x << std::endl;
	
	std::cout << "z = " << z << std::endl;
	px = &z;
	*px = 20;
	std::cout << "z = " << z << std::endl;
	
	int tab[N];
	tab[0] = 1234;
	// nazwa tablicy jest wskaźnikiem na jej pierwszy element
	// tab == &tab[0]
	std::cout << tab << std::endl;
	std::cout << &tab[0] << std::endl;
	std::cout << &tab[1] << std::endl;
	std::cout << &tab[2] << std::endl;
	std::cout << &tab[3] << std::endl;
	std::cout << &tab[4] << std::endl;
	std::cout << *tab << std::endl;

	int* p = tab;
	std::cout << p[0] << std::endl;
	
	return 0;
}
