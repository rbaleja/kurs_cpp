#include <iostream>
#include <iomanip>

int main()
{
	std::cout << std::setprecision(20) << 0.1 << std::endl;
	std::cout << std::setprecision(20) << 0.2 << std::endl;
	std::cout << std::setprecision(20) << 0.3 << std::endl;
	
	bool war = 1.0 + 1.0 == 2.0;
	std::cout << std::boolalpha << war << std::endl;
	war = 0.1 + 0.1 == 0.2;
	std::cout << std::boolalpha << war << std::endl;
	war = 1.0 + 1.0 + 1.0 == 3.0;
	std::cout << std::boolalpha << war << std::endl;
	war = 0.1 + 0.1  + 0.1 == 0.3;
	std::cout << std::boolalpha << war << std::endl;
	return 0;
}
