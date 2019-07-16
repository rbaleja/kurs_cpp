#include <iostream>


int main()
{
    
    
    int liczba = 4;
    
    // jezeli liczba jest rowna 5 to wyswietl napis "o rowna piec!"
    
    if( liczba == 5 ) {
        std::cout << "oo liczba rowna 5 :)" << std::endl;
    } else {
        std::cout << "oo liczba NIE JEST rowna 5 :)" << std::endl;    
    }
    
    
    // przy uzyciu if, else if, else 
    // wypisz: dla liczby rownej 
    // 5: oo liczba to piatka, 
    // 6: oo liczba to 6, 
    // dla innych: liczba to ani 5 ani 6
        
    return 0;
  
}
 /* 
    if(TUTAJ_JAKIS_WARUNEK)
    {
        // kod do wykonania jak warunek jest prawdą 
    }
    
    if(WARUNEK) {
        // w ifie 
    } 
    else 
    {
    
    }
    
    if(WARUNEK_1) {
        
    } else if(WARUNEK_2) {
            jezeli warunek_2 prawda a warunek_1 nie prawda
    } else if(WARUNEK_3) {
        
        
    } else {
        
    }
     */   
