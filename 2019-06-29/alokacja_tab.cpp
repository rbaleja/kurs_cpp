// przyjmij liczbę k, potem k elementów i wypisz najpierw parzyste a potem nieparzyste

#include <iostream>

//const pilnuje nas, żębyśmy nie modyfikowali tablicy tab
void wypisz(const int* tab, int rozmiar, bool parz)
{
	for (int i = 0; i < rozmiar; i++)
	{
		bool war = tab[i] % 2 == 0;
		if (war == parz)
			std::cout << tab[i] << " ";
	}
}

int main()
{
	int k;
	std::cin >> k;
	//rezerwujemy pamiec na k intów
	int* tab = new int[k];
	for (int i = 0; i < k; i++)
	{
		std::cin >> tab[i];
	}
	
	wypisz(tab, k, true);
	wypisz(tab, k, false);
	std::cout << std::endl;
	
	delete[] tab;
	return 0;
}
