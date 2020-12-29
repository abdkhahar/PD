#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;

main()
{
    system("cls");
    char nama[50], nim[20], ulang;

    cout << "Masukkan nama anda : ";
    cin.getline(nama, sizeof(nama));

    system("cls");

    cout << "Nama anda      : " << nama << endl;
    cout << ", panjang nama : " << strlen(nama) << endl << endl;
}
