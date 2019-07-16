#include <iostream>

// TYP_WYNIKU NAZWA(LISTA_ARGUMENTOW)
// {
// 	
// }

void naszafunkcja()
{
	std::cout << "hej" << std::endl;
}

void funkcja2(int x)
{
// 	x = 9001; // x jest kopią, wiec to nie zmienia oryginalnej zmiennej
	std::cout << "argument x = " << x << std::endl;
}

void funkcja3(int x, int y)
{
	std::cout << "fun3: argument x = " << x;
	std::cout << " argument y = " << y << std::endl;
}

int dej5()
{
	std::cout << "daje 5" << std::endl;
	return 5;
// 	std::cout << "dalem 5" << std::endl; // nigdy sie nie wykona
}

int main()
{
	int y = dej5();
	std::cout << "asdf" << std::endl;
	naszafunkcja();
	std::cout << "qwer" << std::endl;
	naszafunkcja();
	funkcja2(y);
	funkcja3(y, 197);
	funkcja2(123);
	naszafunkcja();
	return 0;
}
