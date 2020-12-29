#include<iostream>
using namespace std;

main()
{
    int x=5; //batas

    system("cls");
    for (int i=1; i<=x; i++){
        for (int j=1; j<=x; j++){
            cout << "*";
        }
        cout << endl;
    }
}
