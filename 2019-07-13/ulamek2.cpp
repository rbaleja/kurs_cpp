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
};

int main()
{
	Ulamek x{4, 0};
	Ulamek y{2, 3};
	Ulamek* p = &x;
	std::cout << x.get_licznik() << std::endl;
	x.set_licznik(120);
	x.set_mianownik(0);
	x.wypisz();
	y.wypisz();
	
	
	return 0;
}
