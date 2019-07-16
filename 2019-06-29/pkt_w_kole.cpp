#include <iostream>

int main()
{
	int x1, y1, r, x3, y3;
	std::cin >> x1 >> y1;
	std::cin >> r;
	std::cin >> x3 >> y3;
	
	int a = x1 - x3;
	int b = y1 - y3;
	
	//sprawdzamy czy kwardrat odlegóści punktu od środka koła jest mniejszy niż kwadrat promienia
	if (a * a + b * b < r * r)
		std::cout << "Punkt wewnątrz kola" << std::endl;
	else
		std::cout << "Punkt poza kolem" << std::endl;
	
	return 0;
}
