#include <iostream>

struct Ulamek {
	int licznik;
	int mianownik;
	
	void wypisz() const
	{
// 		this jest typu: const Ulamek* const
		std::cout << "Metoda ulamka!" << std::endl;
		std::cout << licznik << '/' << mianownik << std::endl;
	}
	
	void ustaw(int licznik, int mianownik)
	{
// 		this jest typu: Ulamek* const
// 		this - wskaznik na obiekt, na ktorym wywolujemy metode
		this->licznik = licznik;
		this->mianownik = mianownik;
	}
};

void wypisz(const Ulamek& u)
{
	std::cout << "zwykla funkcja" << std::endl;
	std::cout << u.licznik << '/' << u.mianownik << std::endl;
	u.wypisz();
}

Ulamek stworz(int l, int m)
{
	Ulamek x;
	x.licznik = l;
	x.mianownik = m;
	return x;
}

void ustaw(Ulamek* thi, int l, int m)
{
// 	(*u).licznik = l;
	thi->licznik = l;
	thi->mianownik = m;
}

void licznik_plus_1(Ulamek* u)
{
	u->licznik += 1;
}

int main()
{
	Ulamek x = stworz(4, 7);
	Ulamek y;
// 	ustaw(&y, 2, 3);
	y.ustaw(2, 3);
// 	Ulamek* px = &x;
// 	Ulamek tablica[10];
	
	wypisz(x); //std::cout << x.licznik << '/' << x.mianownik << std::endl;
	wypisz(y);
	licznik_plus_1(&y);
	y.wypisz();
	
	
	return 0;
}
