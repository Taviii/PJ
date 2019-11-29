#include<iostream>
using namespace std;

int silnia (int x);

int main()
{
    int x=4;
int liczba;
cout << "Podaj liczbe: ";
cin >> liczba;
cout << liczba << "! = " << silnia(liczba) << endl;
return 0;
}
int silnia (int y)
{
    if (y ==0 || y == 1)
    {

    return 1;
    }
    else{
        int silnia = 1;
        for (int i=1; i<=y; i++){
            silnia *= i;
        }
        return silnia;
    }
}
