//napisz program, ktory wypisze tekst postaci

// 01010101
// 10101010
// 01010101
// 10101010
// 01010101
// 10101010
// 01010101
// 10101010

#include <iostream>

int main()
{
	const int ROZMIAR = 8;
	for (int j = 0; j < ROZMIAR; j++)
	{
		for (int i = 0; i < ROZMIAR; i++)
		{
			//std::cout << (i + j) % 2
			if ((i + j) % 2 == 0)
				std::cout << 0;
			else
				std::cout << 1;
		}
		std::cout << "\n";
	}
}
