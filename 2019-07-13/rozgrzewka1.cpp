#include <iostream>

int abs(int x)
{
	if (x < 0)
		return -x;
	return x;
}

int main()
{
	int skoczek_x, skoczek_y;
	std::cout << "Podaj wspolrzedne: ";
	std::cin >> skoczek_x >> skoczek_y;
	int licznik = 0;
	for (int x = 0; x < 8; x++)
		for (int y = 0; y < 8; y++)
		{
			//czy mozemy sie ruszyc na x,y
			int roznica_x = abs(skoczek_x - x);
			int roznica_y = abs(skoczek_y - y);
			if ((roznica_x == 2 && roznica_y == 1) || (roznica_x == 1 && roznica_y == 2))
			{
				licznik++;
				std::cout << x << ", " << y << " jest OK\n";
			}
		}
	std::cout << "Licznik: " << licznik << std::endl;
	return 0;
}
