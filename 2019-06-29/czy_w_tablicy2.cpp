#include <iostream>

// funkcja czy_w_tablicy() zwraca informację czy w tablicy tab o rozmiarze rozm znajduje się element równy el_szukany
bool czy_w_tablicy(const int* tab, int rozm, int el_szukany)
{
	for (int i = 0; i < rozm; i++)
	{
		if (tab[i] == el_szukany)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	const int N = 5;
	int tab[N];
	int k;
	for (int i = 0; i < N; i++)
		std::cin >> tab[i];
	std::cin >> k;
	
	bool czy_znalazlem = czy_w_tablicy(tab, N, k);
	
	if (czy_znalazlem)
		std::cout << "Jest w tablicy" << std::endl;
	else
		std::cout << "Nie ma!" << std::endl;
	
	return 0;
}
