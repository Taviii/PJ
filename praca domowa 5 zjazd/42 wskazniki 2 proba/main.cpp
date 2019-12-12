    #include <iostream>
    #include <conio.h>

    int main() {

       int n, k;
       int * wsk1 = &n;
       int * wsk2 = &k;


       std::cout << "Podaj kolejno n i k: " << std::endl;
       std::cin >> n >> k;

       int sn = 1;
       int *wsk3 = &sn;
       for(int i=2; i <= n; i++){
           sn = sn * i;
       }

       int sk =1;
       int *wsk4 = &sk;
       for(int i = 2; i <= k; i++ ){
           sk = sk * i;
       }

       int snk = 1;
       int * wsk5 = &snk;
       for(int i = 2; i <= n-k; i ++){
           snk = snk * i;
       }

       std::cout << "Symbol Newtona n nad k wynosi" << *wsk3 / (*wsk4 * (*wsk5 ));

        _getch();
        return 0;
    }
