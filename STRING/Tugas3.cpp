#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;

main()
{
    system("cls");
    char nama[50];

    cout << "Masukkan nama anda : ";
    cin.getline(nama, sizeof(nama));

    system("cls");

    cout << "Nama anda      : " << nama << endl;
    cout << ", panjang nama : " << strlen(nama) << endl << endl;

    strrev(nama);

    cout << "*pembalikan telah berhasil!" << endl << endl;
    cout << "Nama anda (kebalikan)      : " << nama << endl;
    cout << ", panjang nama (kebalikan) : " << strlen(nama) << endl;
}