#include <iostream>

int max(int x, int y)
{
	std::cout << "Licze max z " << x << " i " << y << std::endl;
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
	int x = 7, y = 5, z = 12;
	std::cout << max(x, max(y, z)) << std::endl;
}
