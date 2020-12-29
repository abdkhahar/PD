#include<iostream>
using namespace std;

main()
{
    int n, fib[50];

    cout << "Masukkan n (batas bilangan): ";
    cin >> n;
    cout << endl;

    for (int i=1; i<n; i++){
        if (i<2){
            fib[0] = 0;
            fib[1] = 1;
        }
        else {
        fib[i] = fib[i-2] + fib[i-1];
        }
    }

    cout << "Deret fibonacci sampai dengan bilangan <= " << n << ":" << endl;

    for (int i=1; i<n; i++){
        if (fib[i]<=n)
        cout << fib[i] << " ";
    }

    cout << "..." << endl;
}
