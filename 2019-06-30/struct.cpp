#include <iostream>
#include <cmath> //std::sqrt()

struct Punkt {
	int x;
	int y;
};

void wypisz(const Punkt& p)
{
	std::cout << p.x << " " << p.y << std::endl;
}

double odleglosc(const Punkt& p, const Punkt& q)
{
	int a = p.x - q.x;
	int b = p.y - q.y;
	double wynik = std::sqrt(a * a + b * b);
	return wynik;
}

Punkt zrob_punkt(int x, int y)
{
	Punkt p;
	p.x = x;
	p.y = y;
	return p;
}

int main()
{
// 	std::cout << sizeof(Punkt) << std::endl;
	Punkt p = zrob_punkt(3, 4);
	Punkt q = zrob_punkt(1, 2);
	wypisz(p);
	wypisz(q);
	std::cout << odleglosc(p, q) << std::endl;
	return 0;
}
