#include <iostream>

class Ulamek {
private:
	int licznik;
	int mianownik;
public:
	
	void wypisz() const
	{
		std::cout << licznik << '/' << mianownik << std::endl;
	}
	
	int get_licznik() const
	{
		return licznik;
	}
	
	void set_licznik(int x)
	{
		licznik = x;
	}
	
	int get_mianownik() const
	{
		return mianownik;
	}
	
	void set_mianownik(int x)
	{
		mianownik = x;
		if (mianownik == 0)
		{
			std::cout << "Mianownik nie może być zerem!\n";
			mianownik = 1;
		}
	}
	
	Ulamek(int licznik, int mianownik)
	{
		this->licznik = licznik;
		set_mianownik(mianownik);
	}
	
// 	void operator*=(const Ulamek& x)
// 	{
// 		this->licznik *= x.get_licznik();
// 		this->mianownik *= x.get_mianownik();
// 	}
	
	void dodaj(const Ulamek& x)
	{
		licznik = licznik * x.mianownik + x.licznik * mianownik;
		mianownik *= x.mianownik;
	}
};







Ulamek operator+(const Ulamek& x, const Ulamek& y)
{
	Ulamek wynik{x};
	wynik.dodaj(y);
	return wynik;
}

void operator*=(Ulamek& x, const Ulamek& y)
{
// 	x.licznik *= y.licznik;
	std::cout << "mnozymy\n";
	x.set_licznik(x.get_licznik() * y.get_licznik());
}


int main()
{
	Ulamek x{1, 2};
	Ulamek y{2, 3};
	Ulamek z{x};

// 	y = operator+(x, x);
// 	y = x + x;
// 	y.wypisz();
	x *= z;
	x.wypisz();
	
// 	x.dodaj(z); //x += z;
// 	x.wypisz();
// 	z.wypisz();
	
	return 0;
}
