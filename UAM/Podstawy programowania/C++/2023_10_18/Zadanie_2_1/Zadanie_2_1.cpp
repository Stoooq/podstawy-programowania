#include <iostream>

using namespace std;

int suma(int tab[], int n){
    int suma = 0;
    for(int i=0; i<n; i++){
        suma = suma + tab[i];
    }
    return suma;
}

float srednia(int tab[], int n){
    float dodawanie = float(suma(tab, n));
    float sredniaTab = dodawanie / n;
    return sredniaTab;
}

int min(int tab[], int n){
    int minIndeks = 1;
    for(int i=0; i<n; i++){
        if(tab[i] < tab[minIndeks]){
            minIndeks = i;
        }
    }
    return minIndeks;
}

int max(int tab[], int n){
    int maxIndeks = 1;
    for(int i=0; i<n; i++){
        if(tab[i] > tab[maxIndeks]){
            maxIndeks = i;
        }
    }
    return maxIndeks;
}

int main() {
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    
    int tab[n];

    for(int i=0; i<n; i++){
        cout << "Indeks " << i << " ";
        cin >> tab[i];    
    }

    for(int i=0; i<n; i++){
        cout << tab[i] << " " << endl;
    }

    cout << "Suma: " << suma(tab, n) << endl;
    cout << "Srednia: " << srednia(tab, n) << endl;
    cout << "Najmniejsza liczba ma indeks: " << min(tab, n) << endl;
    cout << "Najwieksza liczba ma indeks: " << max(tab, n) << endl;
}