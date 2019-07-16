#include <iostream>

class Ulamek {
private:
	int licznik;
	int mianownik;
public:
	
	void wypisz() const
	{
		std::cout << this->licznik << '/' << this->mianownik << std::endl;
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
	
	void operator*=(const Ulamek& x)
	{
		this->licznik *= x.get_licznik();
		this->mianownik *= x.get_mianownik();
	}
	
	Ulamek operator*(const Ulamek& x) const
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
	
	Ulamek operator+(const Ulamek& x) const
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

	z = x + y * z;

	
	return 0;
}
