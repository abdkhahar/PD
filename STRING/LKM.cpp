#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;

main()
{
    system("cls");
    char kalimat[100], nim[50];

    cout << "Masukkan kalimat : ";
    cin.getline(kalimat, sizeof(kalimat));

    system("cls");

    cout << "Kalimat anda      : " << kalimat << endl;
    cout << ", panjang kalimat : " << strlen(kalimat) << endl << endl;

    strrev(kalimat);

    cout << "*pembalikan telah berhasil!" << endl << endl;
    cout << "Kalimat anda (kebalikan)      : " << kalimat << endl;
    cout << ", panjang kalimat (kebalikan) : " << strlen(kalimat) << endl;
}
