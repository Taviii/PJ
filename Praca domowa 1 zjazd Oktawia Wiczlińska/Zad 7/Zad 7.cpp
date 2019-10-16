#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a, b, suma;
	cout << "Podaj pierwsza liczbe calkowita:" << endl;
	cin >> a;
	cout << "Podaj druga liczbe calkowita:" << endl;
	cin >> b;
	
	if ( a< 0 || b<0)
	{
		cout << "Podane liczby nie sa dodatnie";
	}
	else
	if ( a>=0 && b>=0)
	{
		suma= a + b;
		cout << "Suma wynosi: " << suma ;
	}
	cin.sync();

cin.get();
	return 0;
}
