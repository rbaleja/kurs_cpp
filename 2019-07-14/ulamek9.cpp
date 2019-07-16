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
	
	Ulamek& operator*=(const Ulamek& x)
	{
		this->licznik *= x.licznik;
		this->mianownik *= x.mianownik;
		return *this;
	}
	
	Ulamek& operator*=(int x)
	{
		this->licznik *= x;
		return *this;
	}
	
	const Ulamek operator*(const Ulamek& x) const
	{
		return Ulamek{*this} *= x;
	}
	
	const Ulamek operator*(int x) const
	{
		return Ulamek{*this} *= x;
	}
	
	Ulamek& operator+=(const Ulamek& x)
	{
		licznik = licznik * x.mianownik + x.licznik * mianownik;
		mianownik *= x.mianownik;
		return *this;
	}
	
	const Ulamek operator+(const Ulamek& x) const
	{
		return Ulamek{*this} += x;
	}
	
	bool operator<(const Ulamek& inny) const
	{
		return licznik * inny.mianownik < inny.licznik * mianownik;
	}
	
	bool operator>(const Ulamek& inny) const
	{
		return inny < *this;
	}
	
	bool operator<=(const Ulamek& inny) const
	{
		return !(*this > inny);
	}
	
	bool operator>=(const Ulamek& inny) const
	{
		return !(*this < inny);
	}
	
	bool operator==(const Ulamek& inny) const
	{
		return !(inny < *this) && !(*this < inny);
	}
	
	bool operator!=(const Ulamek& inny) const
	{
		return !(inny == *this);
	}
	 
};

const Ulamek operator*(int a, const Ulamek& b)
{
	return b * a;
}

int main()
{
	Ulamek x{1, 2};
	const Ulamek y{2, 3};
	Ulamek z{1, 5};
	Ulamek w = x * 3;
	z *= 7;

	if (x <= y)
		std::cout << "x mniejszy badz rowny y\n";
	
	x.wypisz();
	y.wypisz();
	z.wypisz();
	w.wypisz();
	(3 * z).wypisz();
	
	return 0;
}
