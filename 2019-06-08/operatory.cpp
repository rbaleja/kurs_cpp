#include <iostream>

int main()
{
    int a = 5, b = 10, wynik = 0;
    std::cout << "Wartosc a: " << a << " Wartosc b: " << b << " Wynik:" << wynik << std::endl;
    //a = a + b;
    a += b;
    std::cout << "Wartosc a: " << a << " Wartosc b: " << b << " Wynik:" << wynik << std::endl;
    a *=b; // to samo co a = a * b;
    std::cout << "Wartosc a: " << a << " Wartosc b: " << b << " Wynik:" << wynik << std::endl;
    a /=5;      // to samo co a = a / 5;
    std::cout << "Wartosc a: " << a << " Wartosc b: " << b << " Wynik:" << wynik << std::endl;
    a -=30;      // to samo co a = a - 30;
    std::cout << "Wartosc a: " << a << " Wartosc b: " << b << " Wynik:" << wynik << std::endl;
    
    b %=3;      // to samo co b = b % 3;   reszta z dzielenia czyli w naszym przypadku b = 10 % 3 co da nam 
    std::cout << "Wartosc a: " << a << " Wartosc b: " << b << " Wynik:" << wynik << std::endl;
}
