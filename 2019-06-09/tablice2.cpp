#include <iostream>

// stworz tablice 2d NxM
// kazdemu polu przypisz iloczyn jego wspolrzednych
// wypuisz tablice

int main()
{
	const unsigned N = 5;
	const unsigned M = 6;
	int tab[N][M];

	for (unsigned x = 0; x < N; x++)
	{
		for (unsigned y = 0; y < M; y++)
		{
			tab[x][y] = x * y;
		}
	}
	
	for (unsigned x = 0; x < N; x++)
	{
		for (unsigned y = 0; y < M; y++)
		{
			std::cout << tab[x][y] << " ";
		}
		std::cout << std::endl;
	}
}
