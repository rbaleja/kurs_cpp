#include <iostream>

struct A {
	A(int x) {
		std::cout << "tworze A z agumentem " << x << "\n";
	}
};

struct B {
	A zmienna;
	
	B()
	 : zmienna{99}
	{
		std::cout << "tworze B\n";
	}
};

int main()
{
	B x;
	
}
