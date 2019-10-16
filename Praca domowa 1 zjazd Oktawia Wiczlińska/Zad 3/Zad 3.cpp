#include <iostream>
using namespace std;

float celsjusz, fahrenheit;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	cout << "Podaj temperature w stopniach celsjusza" << endl;
	cin >> celsjusz;
	fahrenheit = (celsjusz * 1.8) + 32;
	cout << "Temperatura w stopniach fahrenheita wynosi "<< fahrenheit << endl;
	
	cin.sync();

cin.get();
	return 0;
}
