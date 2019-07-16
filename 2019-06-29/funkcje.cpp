#include <iostream>

// void oznacza, że funkcja nie zwraca żadnej wartości
void fun()
{
	std::cout << "Hej" << std::endl;
}

int dej_5()
{
	// return X; natychmiast kończy funkcję i zwraca wartość wyrażenia X
	return 5;
}

// każdy argument do funkcji musi być poprzedzony odpowiednim typem
void wypisz(int x)
{
	std::cout << "Wypisz: " << x << std::endl;
}

// przekazywanie argumentu przez referencję daje możliwość edycji oryginalnej zmiennej
void podwoj(int& x)
{
	x *= 2;
}

int main()
{
	fun();
	int x = dej_5();
	podwoj(x);
	wypisz(x);
	return 0;
}
