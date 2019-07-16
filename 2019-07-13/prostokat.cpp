#include <iostream>

class Prostokat {
public:
	Prostokat(int a, int b)
	{
		x = a;
		y = b;
	}
	
	void wypisz() const
	{
		std::cout << "Prostokat (" << x << ", " << y << ")\n";
	}
	
	int pole() const
	{
		return x * y;
	}
	
private:
	int x, y;
};

int main()
{
	Prostokat p{340, 23};
	p.wypisz();
	if (p.pole() > 1000)
		std::cout << "Duuużo" << std::endl;
	return 0;
}
