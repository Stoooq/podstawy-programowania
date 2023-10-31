#include <cstring>
#include <iostream>

using namespace std;

int liczbaZnakow(char napis[], char znak, int n){
    int suma = 0;
    for(int i=0; i<n; i++){
        if(napis[i]==znak){
            suma++;
        }
    }
    return suma;
}

int main(){
    char napis[100];
    cout << "Podaj napis: ";
    cin.getline(napis, 100);

    char n;
    cout << "Podaj znak: ";
    cin >> n;

    cout << "Liter " << n << " jest w napisie: " << liczbaZnakow(napis, n, strlen(napis)) << endl;

    return 0;
}