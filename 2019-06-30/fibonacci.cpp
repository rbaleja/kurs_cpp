#include <iostream>

int fib(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fib(n - 1) + fib(n - 2);
}

//wersja z pętlą do domu (fib(100) ma się policzyć w <1s)

int main()
{
	
	for (int i = 0; i < 10; i++)
		std::cout << fib(i) << std::endl;
	std::cout << fib(100) << std::endl;
}
