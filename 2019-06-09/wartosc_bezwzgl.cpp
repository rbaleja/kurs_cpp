#include <iostream>

int max(int x, int y)
{
	if (x > y)
		return x;
	return y;
}

int abs(int x)
{
// 	return x < 0 ? -x : x;
	if (x < 0)
		return -x;
	return x;
}

int main()
{
	int y = abs(-4);
	std::cout << abs(-17) << std::endl;
}
