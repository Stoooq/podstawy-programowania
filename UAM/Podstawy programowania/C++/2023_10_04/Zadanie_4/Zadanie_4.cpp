#include <iostream>

int main() {

    int n;
    
    std::cout << "Wpisz liczbe n: ";
    std::cin >> n;

    for(int i=1; i<=n; i++) {
        for(int j=0; j<i; j++) {
            std::cout << i;
        }
        std::cout << std::endl;
    }

}