#include <iostream>
#include <conio.h>// musi byc funkcja

using namespace std;

enum dni {pn=1, wt, sr, cz, pt, so, n};
int zostalo (dni ){
int x;
dni zmienna;
zmienna = (dni)x;
return zmienna;

}

int main()
{
    int x;
    cout << "Ktory dzis dzien?"<< endl;
    cin>> x;
    int wynik= dni(7)-x;

    cout << "Do konca tygodnia zostalo "<< wynik << " dni"<< endl;

    _getch();
    return 0;
}
