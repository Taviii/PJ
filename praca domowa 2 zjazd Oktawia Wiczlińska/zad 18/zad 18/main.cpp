#include <iostream>

using namespace std;

int main()
{
    int n;
    int suma;
    do
    {
    cout << "Podaj dowolna liczbe calkowita, wieksza od zera" << endl;
    cin >> n  ;
    } while ( n<=0);
    int i=1;
    while ( i<= n)
        { suma= n*n + n*n;
        cout << "suma kwadratow wynosi:"<< suma << endl;
        i++;
        }


    return 0;
}

