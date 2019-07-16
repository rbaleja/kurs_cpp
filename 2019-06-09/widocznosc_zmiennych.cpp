#include <iostream>

int main()
{
	int x = 5;
	{
		int x = 56;
		std::cout << x << std::endl;
	}
	std::cout << "koniec bloku" << std::endl;
	std::cout << x << std::endl;
	
	
	{
		int i = 0;
		while (i < 10)
		{
			//costam
			i++;
		}
	}
	
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << std::endl;
	}
	std::cout << i << std::endl;
	
}
