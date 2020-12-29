#include<iostream>
using namespace std;

main()
{
    int x=5; //batas

    for (int i=1; i<=x; i++){
        for (int j=1; j<=x; j++){
            if (i==1||i==x)
                cout << "* ";
            else {
                if (j==1||j==x)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }
        cout << endl;
    }
}
