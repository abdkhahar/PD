#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;

main()
{
    system("cls");
    char kata1[50], kata2[50];

    cout << "Masukkan kata: "; cin.getline(kata1, sizeof(kata1));
    system("cls");
    cout << "Kata yang telah diinput (kata1): " << kata1 << endl << endl;

    strcpy(kata2,kata1);
    cout << "*pen-copy-an telah berhasil!" << endl << endl;
    
    cout << "Hasil copy kata1 ke kata2: " << endl;
    cout << "   .kata1: " << kata1 << endl;
    cout << "   .kata2: " << kata2 << endl;
}
