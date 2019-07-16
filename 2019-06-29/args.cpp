#include <iostream>


// argc - liczba argumentów
// argv - tablica napisów
// przykładowo, jeśli uruchomimy program poleceniem
//   ./a.out abc def 123
// to tablica argv będzie zawierać napisy:
//  ./a.out
//  abc
//  def
//  123
int main(int argc, char** argv)
{
	for (int i = 0; i < argc; i++)
		std::cout << argv[i] << std::endl;
}
