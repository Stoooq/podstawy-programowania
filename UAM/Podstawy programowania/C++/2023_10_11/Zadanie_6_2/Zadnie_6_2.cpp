#include <iostream>

int main() {

    int tab[5];
    int minIndeks = 1;

    for(int i=1; i<=5; i++) {
        std::cout << "Liczba " << i << " ";
        std::cin >> tab[i];
        if(tab[i]<tab[minIndeks]) {
            minIndeks = i;
        }
    }

    std::cout << "Najmniejsza wartosc ma indeks: " << minIndeks;

}