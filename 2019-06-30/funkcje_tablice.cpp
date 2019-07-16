#include <iostream>

//wypelnia tablicę tab wartosciami wartosc
// void wypelnij(int* tab, int rozmiar, int wartosc)
//jezeli podamy tylko 2 argumenty to wartosc zostanie ustawiona na 0
void wypelnij(int tab[], int rozmiar, int wartosc = 0)
{
	for (int i = 0; i < rozmiar; i++)
		tab[i] = wartosc;
}
/*
void wypelnij(int tab[], int r)
{
	wypelnij(tab, r, 0);
}*/

int main()
{
	int t[5] = {1, 3, 4, 5, 8};
	for (int i = 0; i < 5; i++)
		std::cout << t[i] << std::endl;
	
	wypelnij(t, 5, 100);
	
	for (int i = 0; i < 5; i++)
		std::cout << t[i] << std::endl;
	
	wypelnij(t, 5);
	
	for (int i = 0; i < 5; i++)
		std::cout << t[i] << std::endl;
}
