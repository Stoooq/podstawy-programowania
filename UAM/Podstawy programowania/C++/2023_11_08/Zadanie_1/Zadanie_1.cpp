#include <iostream>

using namespace std;

void zamiana(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int liczba1;
    cout << "Podaj liczbe1: ";
    cin >> liczba1;
    int liczba2;
    cout << "Podaj liczbe2: ";
    cin >> liczba2;

    cout << "Liczba1 przed: " << liczba1 << " adres przed: " << &liczba1 << endl;
    cout << "Liczba2 przed: " << liczba2 << " adres przed: " << &liczba2 << endl;

    zamiana(&liczba1, &liczba2);

    cout << "Liczba1 po: " << liczba1 << " adres po: " << &liczba1 << endl;
    cout << "Liczba2 po: " << liczba2 << " adres po: " << &liczba2 << endl;
}