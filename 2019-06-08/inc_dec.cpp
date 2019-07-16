#include <iostream>


// incrementacja (++) zwiekszenie wartosci o 1
// decrementacja (--) zmniejszenie wartosci o 1

int main()
{
    int x=1;
    x++; // x+=1; ==> x = x + 1; // nie do konca prawda !:)
    // tutaj x = 2;
    std::cout << "wartosc x: " << x << std::endl;
    ++x;
    
    // tutaj x = 3;
    std::cout << "wartosc x: " << x << std::endl;
    int y = ++x; //  x = 4, y = 4
    
    int z = x++; //  z = 4, x = 5
    
    std::cout << "wartosc x: " << x << std::endl;
    std::cout << "wartosc y: " << y << std::endl;
    std::cout << "wartosc z: " << z << std::endl;
    
    
    y= --x;  // y = 4, x = 4
    z = x--; // z = 4, x = 3
    std::cout << "wartosc x: " << x << std::endl;
    std::cout << "wartosc y: " << y << std::endl;
    std::cout << "wartosc z: " << z << std::endl;
    
    return 0;
  
}
