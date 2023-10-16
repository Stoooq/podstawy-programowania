#include <iostream>

int main() {

    int n;
    std::cout << "Wpisz liczbe n: ";
    std::cin >> n;
    int tab[n];

    int suma = 0;
    int sumaDodatnich = 0;
    int sumaUjemnych = 0;

    for(int i=0; i<n; i++) {
        std::cout << "Liczba " << i + 1 << " ";
        std::cin >> tab[i];
        suma = suma + tab[i];
        if(tab[i] > 0) {
            sumaDodatnich = sumaDodatnich + tab[i];
        } else {
            sumaUjemnych = sumaUjemnych + tab[i];
        }
    }

    for(int i=0; i<n; i++) {
        std::cout << "tab[" << i << "]: " << tab[i] << std::endl;
    }

    std::cout << "Suma wynosi: " << suma << std::endl;
    std::cout << "Suma liczb dodatnich wynosi: " << sumaDodatnich << std::endl;
    std::cout << "Suma liczb ujemnych wynosi: " << sumaUjemnych << std::endl;

}