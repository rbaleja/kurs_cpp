#include <iostream>

void wypisz(const int* tab, int rozmiar)
{
	for (int i = 0; i < rozmiar; i++)
		std::cout << tab[i] << " ";
	std::cout << std::endl;
}

int main()
{
	const int N = 3;
	int t[N];
	t[0] = 3;
	t[1] = 6;
	t[2] = 9;
	wypisz(t, N);
	return 0;
}
