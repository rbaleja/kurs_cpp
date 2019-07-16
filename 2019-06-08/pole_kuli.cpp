#include <iostream>

int main()
{
    float wynik;
    const float PI = 3.14; // stała ktorej nie mozna nadpisac 
    int promien = 4; 
    
    wynik = 4 * PI * promien * promien;  // promiem jest w typie int, nastepuje niejawna konwersja na typ float
    
    std::cout << "pole kuli o promieniu: " << promien << " wynosi: " << wynik << std::endl;
    
}
