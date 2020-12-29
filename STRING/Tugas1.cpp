#include<stdio.h>
#include<string.h>
#include<iostream>
#include<cstdlib>
using namespace std;

main()
{
    system("cls");
    char input[50], ulang;
    int a;

    while(ulang!='n')
    {
        cout << "Menu Program Input String" << endl;
        cout << "-------------------------" << endl;
        cout << "1. scanf" << endl;
        cout << "2. gets" << endl;
        cout << "3. fgets" << endl;
        cout << "-------------------------" << endl << endl;

        cout << "Pilih program: "; cin >> a; cout << endl;

        system("cls");

        switch(a)
        {

            case 1:
            {
                cin.ignore();
                printf("input dari scanf: ");
                scanf("%s", &input);
                system("cls");
                printf("output dari scanf: %s", input);
                printf("\n");

            }break;

            case 2:
            {
                cin.ignore();
                printf("input dari gets: ");
                gets(input);
                system("cls");
                printf("output dari gets: %s", input);
                printf("\n");
            }break;

            case 3:
            {
                cin.ignore();
                printf("input dari fgets: ");
                fgets(input, 50, stdin);
                system("cls");
                printf("output dari fgets: %s", input);
                printf("\n");
            }break;

        }

        cout << endl << "Apakah anda ingin kembali ke menu utama program? (y/n): ";
        cin >> ulang;
        cout << endl;

        system("cls");
    }
}
