#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>

float stopnie, radiany;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	cout << "Podaj wartosc kata w stopniach" << endl;
	cin >> stopnie;
	radiany = stopnie * ( M_PI / 180 );
	cout << "Wartosc kata wyrazona w radianach wynosi: " << radiany << endl;
	cin.sync();

cin.get();
	return 0;
}
