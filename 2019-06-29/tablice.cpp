#include <iostream>

int main()
{
	//const oznacza, że nie można zmieniać wartości tej zmiennej po jej stworzeniu
	const int N = 5;
	int x[N]; // indeksy od 0 do 4 włącznie
	x[0] = 5;
	x[1] = 3;
	x[2] = 6;
	x[3] = 10;
	x[4] = 123;
	for (int i = 0; i < N; i++)
		std::cout << x[i] << std::endl;
	return 0;
}
