#include <iostream>

int main() {

    int tab[10];
    
    for(int i=10; i>0; i--) {
        tab[i] = i;
    }

    for(int i=10; i>0; i--) {
        std::cout << tab[i] << std::endl;
    }
}