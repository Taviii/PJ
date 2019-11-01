#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "Podaj 10 liczb oddzielajac je spacja" << endl;
    int suma = 0;

    for( int i=1; i<=10; i++ )
    {
    int a = 0;
    cin >> a ;
    suma += a ;
    }

    cout << "Suma wynosi: " << suma << endl;
    return 0;
}
