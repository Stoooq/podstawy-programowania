#include <iostream>

using namespace std;

int *mergeArrays(int *t1, int l1, int *t2, int l2)
{
    int l3 = l1 + l2;
    int *t3 = new int [l3];

    for(int i=0; i<l1; i++)
    {
        t3[i] = t1[i];
    }
    for(int i=0; i<l2; i++)
    {
        t3[i + l1] = t2[i];
    }
    return t3;
}

int main()
{
    int x, y;

    cout << "Podaj dlugosc pierwszej tablicy: ";
    cin >> x;
    int tab1[x];

    cout << "Podaj dlugosc drugiej tablicy: ";
    cin >> y;
    int tab2[y];

    for(int i=0; i<x; i++)
    {
        cout << "Podaj wartosc " << i << " indeksu pierwszej tablicy: ";
        cin >> tab1[i];
    }
    for(int i=0; i<y; i++)
    {
        cout << "Podaj wartosc " << i << " indeksu drugiej tablicy: ";
        cin >> tab2[i];
    }
    
    int *tab3 = mergeArrays(tab1, x, tab2, y);

    for(int i=0; i<x+y; i++)
    {
        cout << tab3[i];
    }

    delete[] tab3;
}