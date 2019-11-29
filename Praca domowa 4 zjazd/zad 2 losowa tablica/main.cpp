#include <iostream>// tablica 2d mia³¹ byæ nazwa
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand ((int) time(NULL));
    int tab[5][5] ;

    for ( int i=0; i<5; i++){

        for ( int j=0; j<5; j++){
            tab[i][j]= rand() % 100 + 1; // bezz endl bo wyœwietliæ pierwszy wiersz a potem prze³amaæ
            {
                cout << tab [i][j]<< ", ";

                    }}
                    cout << endl;}

    int max = 0;
    int countI= 0;
    int countJ= 0;
{
     for (int i=0; i<5; i++)
        { for ( int j=0; j<5; j++)
       if (max < tab[i][j]){
        max = tab[i][j];
       countI= i+1;
       countJ= j+1;
       }
     }

}

    cout << "najwieksza liczba to: " << max << "na pozycji" << countI << " i "<< countJ << endl;

    _getch();
    return 0;
}
