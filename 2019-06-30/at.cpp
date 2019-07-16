#include <iostream>
#include <string>

int main()
{
	std::string s = "napis";
// 	std::cout << s[0] << std::endl;
// 	std::cout << s[4] << std::endl;
// 	std::cout << s[5] << std::endl; //zadziala
	std::cout << s.at(0) << std::endl;
	std::cout << s.at(4) << std::endl;
// 	std::cout << s.at(5) << std::endl; //nie zadziała
	s[1] = 'y';
	std::cout << s << std::endl;
	s.at(1) = 'a';
	std::cout << s << std::endl;
}
