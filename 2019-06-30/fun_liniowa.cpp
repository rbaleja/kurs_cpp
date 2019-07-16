
#include <iostream>

//funkcja zwraca liczbę rozwiazan rownania liniowego y = ax + b lub -1 jeśli jest ich nieskończenie wiele
//jeśli istnieje 1 rozwiazanie to powinno zostać zapisane na zmiennej "rozwiazanie"
// int funkcja_liniowa_prostsza(double a, double b)
// {
// 	
// }
int funkcja_liniowa(double a, double b, double* rozwiazanie)
{
	if (a != 0)
	{
		*rozwiazanie = -b / a;
		return 1;
	}
	else if (b == 0)
	{
		return -1;
	}
	else
		return 0;
}

int main()
{
	double rozw;
	double a, b;
	std::cin >> a >> b;
	int ile_rozwiazan = funkcja_liniowa(a, b, &rozw);
	if (ile_rozwiazan == 0)
		std::cout << "Brak rozwiazan" << std::endl;
	else if (ile_rozwiazan == 1)
		std::cout << "Jedno rozwiazanie i wynosi: " << rozw << std::endl;
	else if (ile_rozwiazan == -1)
		std::cout << "Nieskończenie wiele rozwiazan" << std::endl;
	
	return 0;
}
