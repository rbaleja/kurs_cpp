#include <iostream>


/* Program przeliczajacy stopnie na fahrenheit-y
 * 1. Wypisz uzytkownikowi kim jestes i co od niego chcesz
 * 2. Pobierz liczbe
 * 3. Wyswietl wynik przeliczony
 * 
 * */
int main()
{
    std::cout << "Czesc potrafie przeliczac stopnie na fahrenheity, podaj temperature w stopniach:" << std::endl;
    
    float stopnie;
    
    std::cin >> stopnie;
    
    float wynik = stopnie * 1.8 +  32 ;
    
    std::cout << "fahrenheity: " << wynik << std::endl;
 
    
    return 0;
    
}
