#include <iostream>

//przyjmij 5 liczb i wypisz je w odwrotnej kolejności

int main()
{
	const unsigned N = 5;
	int x[N];

	for (unsigned i = 0; i < N; i++)
		std::cin >> x[i];
	
	for (unsigned i = N; i > 0; i--) {
		std::cout << "i = " << i - 1 << std::endl;
		std::cout << x[i - 1] << std::endl;
	}
}
