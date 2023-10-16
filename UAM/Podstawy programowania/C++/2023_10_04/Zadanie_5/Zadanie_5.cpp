#include <iostream>

int main() {

    int n,wynik=0;
    std::cout << "Wpisz liczb n: ";
    std::cin >> n;

    wynik=n;

    for(int i=1; i<n; i++) {
        wynik = wynik * i;
    }
    std::cout << wynik;

}