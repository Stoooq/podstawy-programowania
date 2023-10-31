#include <iostream>

using namespace std;

void wczytanieLiczb(int tab[], int n){
    for(int i=0; i<n; i++){
        cout << "Indeks " << i << " ";
        cin >> tab[i];
    }
}

void wpisanieLiczb(int tab[], int n){
    for(int i=0; i<n; i++){
        cout << tab[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Podaj liczbe elementow: ";
    cin >> n;
    int tab[n];

    wczytanieLiczb(tab, n);
    wpisanieLiczb(tab, n);
}