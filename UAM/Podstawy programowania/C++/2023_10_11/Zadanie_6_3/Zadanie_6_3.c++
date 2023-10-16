#include <iostream>

int main() {

    int liczba;
    int cyfry[10] = {0};
    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;

    while(liczba != 0) {
        int cyfra = liczba % 10;
        cyfry[cyfra]++;
        liczba = liczba/10;
        std::cout << cyfra << " ";
    }

    for(int i=-1; i<10; i++) {
        std::cout << "Cyfra " << i << " " << cyfry[i] << std::endl;
    }
}