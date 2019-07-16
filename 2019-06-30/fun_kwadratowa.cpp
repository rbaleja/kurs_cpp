#include <iostream>
#include <cmath> //std::sqrt()
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
//zwracamy ile rozwiazan (-1 jesli nieskończenie wiele) i jesli są jakies rozwiazania to wpisujemy je pod rozw1 i rozw2
int funkcja_kwadratowa(double a, double b, double c, double* rozw1, double* rozw2)
{
	if (a == 0)
		return funkcja_liniowa(b, c, rozw1);
	//nie musimy robic else, bo byl return w ifie
	double delta = b * b - 4 * a * c;
	if (delta > 0) {
		*rozw1 = (-b - std::sqrt(delta)) / (2 * a);
		*rozw2 = (-b + std::sqrt(delta)) / (2 * a);
		return 2;
	}
	else if (delta == 0) {
		*rozw1 = -b / (2 * a);
		return 1;
	}
	else
		return 0;
}

int main()
{
	double rozw1, rozw2;
	double a, b, c;
	std::cin >> a >> b >> c;
	int ile_rozwiazan = funkcja_kwadratowa(a, b, c, &rozw1, &rozw2);
	if (ile_rozwiazan == 0)
		std::cout << "Brak rozwiazan" << std::endl;
	else if (ile_rozwiazan == 1)
		std::cout << "Jedno rozwiazanie i wynosi: " << rozw1 << std::endl;
	else if (ile_rozwiazan == 2)
		std::cout << "Dwa rozwiazania: " << rozw1 << " i " << rozw2 << std::endl;
	else if (ile_rozwiazan == -1)
		std::cout << "Nieskończenie wiele rozwiazan" << std::endl;
	
	return 0;
}
