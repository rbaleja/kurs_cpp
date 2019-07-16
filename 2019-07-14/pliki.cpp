#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::string s;
	std::ifstream plik{"tekst.txt"};//, std::fstream::in};
	std::fstream wyjscie{"wyjscie.txt", std::fstream::out};
	
	for (int i = 1; plik >> s; i++)
		wyjscie << i << ": " << s << std::endl;
	
	plik.close();
	wyjscie.close();
	
	std::cout << std::endl;
	return 0;
}
