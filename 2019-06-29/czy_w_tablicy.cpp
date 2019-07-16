#include <iostream>

int main()
{
	const int N = 5;
	int tab[N];
	int k;
	
	//przyjmujemy od uzytkownika N liczb i zapisujemy w tablicy x
	for (int i = 0; i < N; i++)
		std::cin >> tab[i];
	
// 	przyjmujemy element, którego będziemy szukać
	std::cin >> k;
	
	
	bool czy_znalazlem = false;
	for (int i = 0; i < N; i++)
	{
		//sprawdzamy czy i-ty element tablicy jest równy k
		if (tab[i] == k)
		{
			czy_znalazlem = true;
			break;
		}
	}
	
	if (czy_znalazlem)
		std::cout << "Jest w tablicy" << std::endl;
	else
		std::cout << "Nie ma!" << std::endl;
	
	return 0;
}
