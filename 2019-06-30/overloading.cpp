#include<iostream>
// 1. wartosc_bezwzgledna dla int i dla double
int abs(int x)
{
	if (x < 0)
		return -x;
	return x;
}

double abs(double x)
{
	if (x < 0)
		return -x;
	return x;
}

// 2. max(a, b) - zwraca wiekszy z 2 elementow
// 	  max(a, b, c) - najwiekszy z 3 elementow
//    max(a, b, c, d)
int max(int a, int b)
{
	if (a > b)
		return a;
	return b;
}

int max(int a, int b, int c)
{
	return max(a, max(b, c));
}

int max(int a, int b, int c, int d)
{
	return max(a, max(b, c, d));
}

void fun(int x)
{
	std::cout << "argument int" << std::endl;
}

void fun(double x)
{
	std::cout << "argument double" << std::endl;
}

void fun(double x, double y)
{
	std::cout << "argument dwa double" << std::endl;
}

int main()
{
	double d = -3.14;
	std::cout << d << std::endl;
	std::cout << abs(d) << std::endl;
	std::cout << max(3, 6) << std::endl;
}
