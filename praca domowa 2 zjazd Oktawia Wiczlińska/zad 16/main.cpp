#include <iostream>

using namespace std;

int main()
{
    cout << "Oto wszystkie liczby dwucyfrowe: " << endl;
    int dwu;
    for ( dwu=10; dwu<100; ++dwu)
    cout << dwu << endl;



cout << " A to liczby trzycyfrowe podzielne przez 13: " << endl;
	for(int licznik=100; licznik<=1000; licznik++)
	{
		if(licznik%13 == 0)
		{
			cout << licznik << endl;
		}
	}
return 0;
}
