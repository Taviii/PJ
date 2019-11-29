#include <iostream>

using namespace std;

int zamiana ( int a, int b);

int main()
{
    int x= 3;
    int y= 7;
    cout << x << " i " << y << endl;
    cout << zamiana(x,y) << " i " << zamiana(y,x)<< endl;

}

int zamiana (int a, int b){
    int x= a;
     a= b;
     b= x;
     return a;
}

