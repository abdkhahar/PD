#include<iostream>
#include<cstdlib>
using namespace std;

main()
{
    int x=10; //batas
    system("cls");
    for(int i=1; i<=x; i++){
        for(int j=1; j<=x; j++){
            if (i==j||j==x-i+1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
