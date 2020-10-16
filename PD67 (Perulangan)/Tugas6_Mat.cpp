#include<iostream>
using namespace std;

main()
{
    char ulangi='y';
    while (ulangi=='y'){

    int pil;
    cout << "Menu Perhitungan Matematika :" << endl;
    cout << "1. Perpangkatan" << endl;
    cout << "2. Perkalian" << endl;
    cout << "3. FPB" << endl;
    cout << "4. KPK" << endl;
    cout << "Pilih menu : ";
    cin >> pil;

    if(pil == 1)    //perpangkatan
    {
        int m, n, total = 1;
        cout << endl << "Menghitung hasil m pangkat n" << endl;
        cout << "Masukkan nilai m : ";
        cin >> m;
        cout << "Masukkan nilai n : ";
        cin >> n;
        for (int i = 1; i <= n; i++) {
            total = total * m;
        }
        cout << endl << "Hasil dari " << m << " pangkat " << n << " adalah " << total << endl;
    }

    else if(pil == 2)   //perkalian
    {
        int m, n, total = 0;
        cout << endl << "Menghitung hasil m kali n" << endl;
        cout << "Masukkan nilai m : ";
        cin >> m;
        cout << "Masukkan nilai n : ";
        cin >> n;
        for (int i = 1; i <= n; i++) {
            total = total + m;
        }
        cout << endl << "Hasil dari " << m << " kali " << n << " adalah " << total << endl;
    }

    else if(pil == 3)   //FPB
    {
        int m, n, terkecil, fpb = 0;
        cout << endl << "Menghitung hasil FPB dari m dan n" << endl;
        cout << "Masukkan nilai m : ";
        cin >> m;
        cout << "Masukkan nilai n : ";
        cin >> n;
        if(m>n)
        {
            terkecil = n;
        }
        else if(m<n)
        {
            terkecil = m;
        }
        for (int i = 1; i <= terkecil; i++) {
            if(m % i == 0 && n % i == 0){
            fpb = i;
            }
        }
        cout << endl << "Hasil FPB dari " << m << " dan " << n << " adalah " << fpb << endl;
    }

    else if(pil == 4)   //KPK
    {
        int m, n, kpk = 0;
        cout << endl << "Menghitung hasil KPK dari m dan n" << endl;
        cout << "Masukkan nilai m : ";
        cin >> m;
        cout << "Masukkan nilai n : ";
        cin >> n;
        for (int i = 1; i <= m; i++)
        {
            kpk += n;
            if(kpk % m == 0)
            {
               cout << endl << "Hasil KPK dari " << m << " dan " << n << " adalah " << kpk << endl;
               break;
            }
        }
    }

    cout << endl << "Apakah anda ingin kembali ke menu? (y/n): ";
    cin >> ulangi;
    cout << endl;
    }
}
