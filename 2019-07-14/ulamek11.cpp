#include <iostream>
#include <cmath>

class Ulamek {
private:
	int licznik;
	int mianownik;
public:
	Ulamek(int licznik, int mianownik = 1)
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
	
	operator double() const
	{
		return static_cast<double>(licznik) / mianownik;
	}
	
	friend std::ostream& operator<<(std::ostream& os, const Ulamek& x);
	friend std::istream& operator>>(std::istream& is, Ulamek& x);
};

const Ulamek operator*(int a, const Ulamek& b)
{
	return b * a;
}

std::ostream& operator<<(std::ostream& os, const Ulamek& x)
{
	os << x.licznik << '/' << x.mianownik;
	return os;
}

std::istream& operator>>(std::istream& is, Ulamek& x)
{
	is >> x.licznik;
	int m;
	is >> m;
	x.set_mianownik(m);
	return is;
}

int main()
{
	Ulamek x{6, 3};
	double d = x;
	std::cout << std::sqrt(x) << std::endl;
	
	return 0;
}
