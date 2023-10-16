#include <iostream>

int main() {

    int wiek = 0;
    std::cout << "Podaj wiek: ";
    std::cin >> wiek;

    if(wiek>=12)
        wiek++;
    else if(wiek>=18)
        wiek++;
    else if(wiek>=60)
        wiek++;

    switch(wiek) {
        case 1:
            std::cout << "Dziecko";
            break;
        case 2:
            std::cout << "Nastolatek";
            break;
        case 3:
            std::cout << "Dorosly";
            break;
        case 4:
            std::cout << "Senior";
            break;
    }

}