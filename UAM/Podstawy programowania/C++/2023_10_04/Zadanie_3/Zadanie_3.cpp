#include <iostream>

int main() {

    int n;
    std::cout << "Wpisz liczbe n: ";
    std::cin >> n;

    int j = n + 1;

    for(int i=1; i<n; i++) {
        if(i%2==0) {
            std::cout << i << std::endl;
        }
    }

}