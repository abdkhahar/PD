#include<iostream>
using namespace std;

main()
{
    string final;
    int cacah, genap, gasal, n, a, fib1 = 1, fib2 = 0, pil;

    while (final != "n")
    {
        cout << "Pilihan Menu :" << endl;

        cout << "1. Bilangan Cacah " << endl;
        cout << "2. Bilangan Genap " << endl;
        cout << "3. Bilangan Gasal " << endl;
        cout << "4. Bilangan Fibonacci " << endl;

        cout << endl;

        cout << "Masukkan menu pilihan : ";
        cin >> pil;

        if (pil == 1)
        {
            cout << "masukkan n (batas akhir): ";
            cin >> n;
            for (cacah = 0; cacah <= n;)
            {
                cout << cacah << endl;
                cacah++;
            }
            cout << "Tampilkan bilangan lainnya ? (y/n) : ";
            cin >> final;
        }
        else if (pil == 2)
        {
            cout << "masukkan n (batas akhir): ";
            cin >> n;
            for (genap = 0; genap <= n; genap++)
            {
                // genap = genap + 2;
                cout << genap << endl;
                genap++;
            }
            cout << "Tampilkan bilangan lainnya ? (y/n) : ";
            cin >> final;
        }
        else if (pil == 3)
        {
            cout << "masukkan n (batas akhir): ";
            cin >> n;
            for (gasal = 0; gasal <= n; gasal++)
            {
                gasal = gasal + 1;
                cout << gasal << endl;
            }
            cout << "Tampilkan bilangan lainnya ? (y/n) : ";
            cin >> final;
        }
        else if (pil == 4)
        {
            cout << "masukkan n (batas akhir): ";
            cin >> n;
            for (a = 1; a <= n; ++a)
            {
                a = fib1 + fib2;
                fib2 = fib1;
                fib1 = a;
                cout << a << endl;
            }
            cout << "Tampilkan bilangan lainnya ? (y/n) : ";
            cin >> final;
        }
    }
}
