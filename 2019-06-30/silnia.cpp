//napisz funkcję liczącą silnię z podanej liczby
// przypominajka:
// 0! = 1
// 5! = 1 * 2 * 3 * 4 * 5

#include <iostream>
/*
int silnia(int n)
{
	int wynik = 1;
	for (int i = 1; i <= n; i++)
	{
// 		wynik = wynik * i;
		wynik *= i;
	}
	return wynik;
}
*/

int silnia(int n)
{
	if (n == 0)
		return 1;
	return n * silnia(n - 1);
}

int main()
{
	std::cout << silnia(0) << std::endl;
	std::cout << silnia(5) << std::endl;
	std::cout << silnia(8) << std::endl;
}
