#include <iostream>

using namespace std;

int suma(int a, int b){
    return a + b;
}

int main(){
    int liczba1;
    int liczba2;
    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;
    cout << "Podaj druga liczbe: ";
    cin >> liczba2;

    cout << suma(liczba1, liczba2);
}