#include <iostream>

int main() {

    int n;

    std::cout << "Wpisz liczbe n: ";
    std::cin >> n;

    if(n%2==0) {
        std::cout << "Liczba jest parzysta";
    }else {
        std::cout << "Liczba jest nieparzysta";
    }

}