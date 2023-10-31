#include <iostream>

using namespace std;

bool anagram(char tab1[], char tab2[], int n){
    for(int i=0; i<n; i++){
        cout << "Numer indeksu pierwszej tablicy: " << i << " ";
        cin >> tab1[i];
    }
    for(int i=0; i<n; i++){
        cout << "Numer indeksu drugiej tablicy: " << i << " ";
        cin >> tab2[i];
    }
    for(int i=0; i<n; i++){
        char tab1_element = tab1[i];
        for(int j=0; j<n; j++){
            char tab2_element = tab2[j];
            if(tab1_element == tab2_element){
                break;
            }
            if(j == n-1){
                cout << "Nie anagram";
                return false;
            }
        }
    }
    cout << "Anagram";
    return true;
}

int main(){
    int n;
    cout << "Podaj dlugosc wyrazow: ";
    cin >> n;
    char tab1[n];
    char tab2[n];

    //cout << anagram(tab1, tab2, n);

    anagram(tab1, tab2, n);
}