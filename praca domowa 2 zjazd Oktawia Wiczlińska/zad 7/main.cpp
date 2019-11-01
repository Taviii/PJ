#include <iostream>
 #include <cstdlib>
  #include  <ctime>
using namespace std;
int n;
int main()
{
srand ((int) time(NULL));
int nWylosowana = rand() % 100 + 1;

    cout << "Odgadnij liczbe:" << endl;

    while ( n>nWylosowana || n<nWylosowana) {
        cin >> n;
        if ( nWylosowana>n)
        {
            cout << "Komputer myslal o wiekszej liczbie" << endl;
        }
        if ( nWylosowana<n)
        {

            cout << "Komputer myslal o mniejszej liczbie" << endl;
        }

    }
    if (nWylosowana == n)
    {
        cout << "Gratulacje! Odgadles mysli komputera!"<< endl;
    }
    return 0;
}
