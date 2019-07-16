#include <iostream>
#include <string>

class Postac {
public:
	Postac(const std::string& imie, int sila, int intelekt, int zdrowie)
	 : imie{imie}, sila{sila}, intelekt{intelekt}, zdrowie{zdrowie}, max_zdrowie{zdrowie}, exp{0}
	{
	}

	void otrzymaj_obrazenia(const Postac& p)
	{
		std::cout << p.imie << " atakuje " << imie << std::endl;
		otrzymaj_obrazenia(p.sila);
	}
	
	void otrzymaj_obrazenia(int ile)
	{
		std::cout << imie << " otrzymuje " << ile << " punktow obrazen!" << std::endl;
		zdrowie -= ile;
		if (zdrowie < 0)
			zdrowie = 0;
	}
	
	bool czy_zyje() const
	{
		return zdrowie > 0;
	}
	
	void wylecz(int ile)
	{
		if (!czy_zyje())
		{
			std::cout << "Na pierwsza pomoc juz za pozno." << std::endl;
			return;
		}
		std::cout << imie << " leczy " << ile << " punktow." << std::endl;
		zdrowie += ile;
		if (zdrowie > max_zdrowie)
			zdrowie = max_zdrowie;
	}
	
	void wypisz() const
	{
		std::cout << "Jestem " << imie << std::endl << "Sila: " << sila << std::endl
			<< "intelekt: " << intelekt << std::endl << "HP: " << zdrowie << '/' << max_zdrowie
			<< std::endl << "exp: " << exp << std::endl;
	}

private:
	std::string imie;
	int sila;
	int intelekt;
	int zdrowie;
	int max_zdrowie;
	int exp;
};

//walka pomiedzy 2 postaciami
//w walce wybor pomiedzy atakiem fizycznym(sila) i magicznym(intelekt)
//wygrana walka daje doswiadczenie(exp) - osobna metoda do przyznawania expa
//jeżeli exp przekroczy 10 to exp -= 10 i level up
//sila ataku jest losowa
//etc.

int main()
{
	Postac rufus{"Rufus", 10, 1, 100};
	Postac brutus{"Brutus", 30, 1, 100};
	
	rufus.otrzymaj_obrazenia(brutus);
	
	while (rufus.czy_zyje())
	{
		rufus.wypisz();
		rufus.otrzymaj_obrazenia(15);
		rufus.wylecz(3);
	}
	rufus.wypisz();
	return 0;
}
