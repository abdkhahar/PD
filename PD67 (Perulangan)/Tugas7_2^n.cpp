#include<iostream>
using namespace std;

main ()
{
    char ulangi='y';
    while (ulangi=='y'){

    int n, total = 1;
        cout << endl << "Menghitung hasil 2 pangkat n" << endl;
        cout << "Masukkan nilai n : ";
        cin >> n;
        for (int i = 1; i <= n; i++) {
            total = total * 2;
        }
        cout << endl << "Hasil dari 2" << " pangkat " << n << " adalah " << total << endl;

    cout << endl << "Apakah anda ingin mengulang program? (y/n): ";
    cin >> ulangi;
    cout << endl;
    }
}
