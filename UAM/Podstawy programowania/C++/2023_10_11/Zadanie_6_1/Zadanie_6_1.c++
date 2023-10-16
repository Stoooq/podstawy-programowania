#include <iostream>

int main() {

    int tab[10];
    float liczba = 0;
    float sr_ar;
    
    for(int i=0; i<10; i++) {
        std::cout << "Liczba " << i + 1 << " ";
        std::cin >> tab[i];
        liczba = liczba + tab[i];
        sr_ar = liczba / 10;
    }
    std::cout << "srednia arytmetyczna wynosi: " << sr_ar;

}