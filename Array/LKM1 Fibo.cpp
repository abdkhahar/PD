#include<iostream>
using namespace std;

main()
{
    int n, fib[50];

    cout << "Masukkan n (jumlah deret): ";
    cin >> n;
    cout << endl;

    for (int i=0; i<n; i++){
        if (i<2){
            fib[0] = 0;
            fib[1] = 1;
        }
        else {
        fib[i] = fib[i-2] + fib[i-1];
        }
    }

    cout << "Deret fibonacci sampai dengan deret ke-" << n << ":" << endl;

    for (int i=0; i<n; i++){
        cout << fib[i] << " ";
    }

    cout << "..." << endl;
}
