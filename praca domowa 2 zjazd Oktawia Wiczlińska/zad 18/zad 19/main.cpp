#include<iostream>
#include<cstdlib>
using namespace std;

bool lpierwsza(int n)
{
	if(n<2)
    return false;
	for(int i=2;i*i<=n;i++)
    if(n%i==0)
    return false;
	return true;
}
int main()
{
	int n;
	cout<< "Podaj liczbe" << endl;
	cin>>n;
	if (lpierwsza(n))
		cout << "Liczba "<< n <<" jest pierwsza" << endl;
	else
		cout << "Liczba "<< n <<" nie jest pierwsza" << endl;
	return 0;
}
