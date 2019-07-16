#include <iostream>

int main()
{
	int a, b;
// 	std::cin >> a;
// 	std::cin >> b;
	
	if (true || true)
	{
		std::cout << "TAK" << std::endl;
	}
	if (true || false)
	{
		std::cout << "TAK2" << std::endl;
	}
	if (false || true)
	{
		std::cout << "TAK3" << std::endl;
	}
	if (false || false)
	{
		std::cout << "TAK4" << std::endl;
	}
	
	if (true && true)
	{
		std::cout << "TAK5" << std::endl;
	}
	if (true && false)
	{
		std::cout << "TAK6" << std::endl;
	}
	if (false && true)
	{
		std::cout << "TAK7" << std::endl;
	}
	if (false && false)
	{
		std::cout << "TAK8" << std::endl;
	}
	
	return 0;
}
