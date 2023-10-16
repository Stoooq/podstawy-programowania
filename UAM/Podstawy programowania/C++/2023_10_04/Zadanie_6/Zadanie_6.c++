#include <iostream>

int main() {

    int n,i=1;
    std::cout << "wpisz liczbe n: ";
    std::cin >> n;

    while(i<=n) {
        if(i%2==0) {
            std::cout << i;
            std::cout << std::endl;
        }
        i = i + 1;
    }
}