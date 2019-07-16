#include <iostream>

class Ulamek {
private:
	int licznik;
	int mianownik;
public:
	Ulamek(int licznik, int mianownik)
	{
		this->licznik = licznik;
		set_mianownik(mianownik);
	}
	
	void wypisz() const
	{
		std::cout << this->licznik << '/' << this->mianownik << std::endl;
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
	
	void operator*=(const Ulamek& x)
	{
		this->licznik *= x.licznik;
		this->mianownik *= x.mianownik;
	}
	
	const Ulamek operator*(const Ulamek& x) const
	{
		Ulamek wynik{*this};
		wynik *= x;
		return wynik;
	}
	
	void operator+=(const Ulamek& x)
	{
		licznik = licznik * x.mianownik + x.licznik * mianownik;
		mianownik *= x.mianownik;
	}
	
	const Ulamek operator+(const Ulamek& x) const
	{
		Ulamek wynik{*this};
		wynik += x;
		return wynik;
	}
};

int main()
{
	Ulamek x{1, 2};
	Ulamek y{2, 3};
	Ulamek z{1, 5};

// 	x + y = z;
	z = x + y;
	x.wypisz();
	y.wypisz();
	z.wypisz();
	
	return 0;
}
