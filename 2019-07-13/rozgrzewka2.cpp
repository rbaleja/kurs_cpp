#include <iostream>

bool czy_pole_na_szachownicy(int x, int y)
{
	if (x >= 0 && x < 8 && y >= 0 && y < 8)
	{
		std::cout << x << ", " << y << " jest OK\n";
		return true;
	}
	return false;
}

int main()
{
	int skoczek_x, skoczek_y;
	std::cout << "Podaj wspolrzedne: ";
	std::cin >> skoczek_x >> skoczek_y;
	int licznik = 0;
	if (czy_pole_na_szachownicy(skoczek_x + 2, skoczek_y + 1))
		licznik++;
	if (czy_pole_na_szachownicy(skoczek_x + 2, skoczek_y - 1))
		licznik++;
	if (czy_pole_na_szachownicy(skoczek_x - 2, skoczek_y + 1))
		licznik++;
	if (czy_pole_na_szachownicy(skoczek_x - 2, skoczek_y - 1))
		licznik++;
	if (czy_pole_na_szachownicy(skoczek_x + 1, skoczek_y + 2))
		licznik++;
	if (czy_pole_na_szachownicy(skoczek_x + 1, skoczek_y - 2))
		licznik++;
	if (czy_pole_na_szachownicy(skoczek_x - 1, skoczek_y + 2))
		licznik++;
	if (czy_pole_na_szachownicy(skoczek_x - 1, skoczek_y - 2))
		licznik++;
	
	std::cout << "Licznik: " << licznik << std::endl;
	return 0;
}
