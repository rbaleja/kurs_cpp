#include <iostream>

struct Zolw {
	int x;
	int y;
	int kierunek; // 0-N, 1-E, 2-S, 3-W
	
	static const int ruchy[4][2];
	
	static const char* nazwa_kierunku(int kier)
	{
		switch (kier)
		{
			case 0:
				return "Polnoc";
			case 1:
				return "Wschod";
			case 2:
				return "Poludnie";
			case 3:
				return "Zachod";
			default:
				return "zly kierunek!";
		}
	}
	
	Zolw(int x = 0, int y = 0, int k = 0)
	{
		std::cout << "KONSTRUKTOR\n";
		this->x = x;
		this->y = y;
		kierunek = k;
	}
	
	void wypisz() const
	{
		std::cout << "Jestem zolw i stoję na (" << x << ", " << y << ")\n";
		std::cout << "Jestem zwrocony w kierunku: " << nazwa_kierunku(kierunek) << std::endl;
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
	
	void krok(int k = 1)
	{
			x += k * ruchy[kierunek][0];
			y += k * ruchy[kierunek][1];
	}
};

const int Zolw::ruchy[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

int main()
{
	Zolw z;
	std::cout << Zolw::ruchy[2][1] << std::endl;
	Zolw y{66,99,3};
	Zolw x;
	z.wypisz();
	z.krok();
	z.prawo();
	z.krok();
	z.krok();
	z.lewo();
	z.krok();
	z.wypisz();
	y.wypisz();
	std::cout << Zolw::nazwa_kierunku(3) << std::endl;
	return 0;
}
