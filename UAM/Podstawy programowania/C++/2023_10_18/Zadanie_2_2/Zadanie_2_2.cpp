#include <iostream>

using namespace std;

void doskonale(int i){
    int suma = 0;
    if(i > 0){
        for(int j=1; j<= i/2; j++){
            if(i%j == 0){
                suma = suma + j;
            }
        }
        if(suma == i){
            cout << "Liczba jest doskonala ";
            cout << i << endl;
        }
    }
}

int main(){
    int min, max;
    cout << "Podaj minimalny zakres: ";
    cin >> min;
    cout << "Podaj maksymalny zakres: ";
    cin >> max;

    for(int i=min; i<max; i++){
        doskonale(i);
    }
}