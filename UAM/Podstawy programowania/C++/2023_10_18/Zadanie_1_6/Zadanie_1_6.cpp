#include <iostream>

using namespace std;

bool pierwsza(int n){
    if(n == 1 || n == 2){
        return true;
    }else if(n <= 0){
        return false;
    }

    for(int i = 2; i <= n/2; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){ 
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;

    if(pierwsza(n)){
        cout << "Liczba pierwsza";
    }else cout << "Liczba nie pierwsza";

    return 0;
}