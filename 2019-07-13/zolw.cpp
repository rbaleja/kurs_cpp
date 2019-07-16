#include <iostream>

struct Zolw {
	int x;
	int y;
	int kierunek; // 0-N, 1-E, 2-S, 3-W
	
	void wypisz() const
	{
		std::cout << "Jestem zolw i stoję na (" << x << ", " << y << ")\n";
		std::cout << "Jestem zwrocony w kierunku: " << kierunek << std::endl;
	}
	
	void prawo()
	{
		kierunek = (kierunek + 1) % 4;
	}
	
	void lewo()
	{
// 		kierunek = (kierunek - 1 + 4) % 4;
		if (--kierunek < 0)
			kierunek += 4;
	}
	
	void krok()
	{
		const int ruchy[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
		switch (kierunek)
		{
			case 0:
				y++;
				break;
			case 1:
				x++;
				break;
			case 2:
				y--;
				break;
			case 3:
				x--;
				break;
		}
	}
};

int main()
{
	Zolw z;
	z.x = 0;
	z.y = 0;
	z.kierunek = 0;
	Zolw y;
	z.wypisz();
	z.krok();
	z.prawo();
	z.krok();
	z.krok();
	z.lewo();
	z.krok();
	z.wypisz();
	y.wypisz();
	return 0;
}
