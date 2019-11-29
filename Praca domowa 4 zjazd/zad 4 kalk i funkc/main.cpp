#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

float suma(float a, float b);
float odejmowanie(float a, float b);
float mnozenie(float a, float b);
float dzielenie(float a, float b);


int main()
{

int wybor;
    float liczba1 = 0;
    float liczba2 = 0;
    int operacja = 1;
    cout << "Podaj pierwsza liczbe: "<< endl;
    cin >> liczba1;
    cout << "Podaj druga liczbe: "<< endl;
    cin >> liczba2;

    cout << endl;
    cout << endl;

    cout << "Wybierz dzialanie: "<< endl;
    cout << "1.Dodawanie"<< endl;
    cout<< "2.Odejmowanie"<< endl;
    cout << "3. Mnozenie"<< endl;
    cout << "4 Dzielenie"<< endl;
    cout << "5. wyjscie" << endl;
    cout << "Twoj wybor" ;
    cin>> wybor;

    switch ( wybor) {
    case 1: cout << liczba1 << "+" << liczba2<< "=" << suma (liczba1,liczba2); break;
    case 2: cout << liczba1 << "-" << liczba2<< "=" << odejmowanie (liczba1, liczba2); break;
    case 3: cout << liczba1 << "*" << liczba2<< "=" << mnozenie (liczba1, liczba2 ); break;
    case 4:
        if (liczba2 !=0) cout << liczba1 << " / "<< liczba2 << " = " << liczba1 << " = " << liczba1 / liczba2;
            else cout << "Podaj inna druga liczba- rozna od zera" << endl; break;
                case 0: cout << "dziekuje" << endl; break;
            default: cout<< "nie ma takiej operacji" << endl;
    case 5: break;

    }
_getch();
    return 0;
}


float suma(float a, float b){
return a+b;}
float odejmowanie(float a, float b){
return a-b;}
float mnozenie(float a, float b){
return a*b;}
float dzielenie(float a, float b){
    return a/b;
}
