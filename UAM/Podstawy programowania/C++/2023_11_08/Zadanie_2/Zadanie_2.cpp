#include <iostream>

using namespace std;

int main() {
    int *liczba1 = new int;
    int *liczba2 = new int;
    int *suma = new int;

    cout << "Podaj wartosc liczby1: ";
    cin >> *liczba1;
    cout << "Podaj wartosc liczby2: ";
    cin >> *liczba2;

    *suma = *liczba1 + *liczba2;

    cout << *suma;

    delete liczba1;
    delete liczba2;
    delete suma;
}