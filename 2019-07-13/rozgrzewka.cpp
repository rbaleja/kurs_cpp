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

int ile_pol(int x, int y)
{
	const int ROZMIAR = 8;
	const int ruchy[ROZMIAR][2] = {
		{2, 1}, {2, -1}, {-2, 1}, {-2, -1},
		{1, 2}, {1, -2}, {-1, 2}, {-1, -2}
	};
	
	int licznik = 0;
	
	for (int i = 0; i < ROZMIAR; i++)
		if (czy_pole_na_szachownicy(x + ruchy[i][0], y + ruchy[i][1]))
			licznik++;
	return licznik;
}

int main()
{
	int skoczek_x, skoczek_y;
	std::cout << "Podaj wspolrzedne: ";
	std::cin >> skoczek_x >> skoczek_y;
	
	std::cout << "Licznik: " << ile_pol(skoczek_x, skoczek_y) << std::endl;
	return 0;
}
