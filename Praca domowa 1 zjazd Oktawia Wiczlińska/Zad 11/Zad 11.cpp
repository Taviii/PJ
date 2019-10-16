#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a, b, c;

int main() {
	
	cout << "Podaj 3 liczby (rozdziel je spacja)" << endl;
	cin >>a>>b>>c;
		
	if ((a>=b) && (a>=c))
	cout <<"Najwieksza liczba to: "<< a;
	else if ((b>=a) && (b>=c))
	cout <<"Najwieksza liczba to: "<< b;
	else if ((c>=b) && (c>=a))
	cout <<"Najwieksza liczba to: "<< c;
	cin.sync();

cin.get();
	return 0;
}
