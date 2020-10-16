#include<iostream>
using namespace std;

main()
{
    char ulangi='y';
    while (ulangi=='y'){

    int n;          //amount of number (looping)
    int x;          //number will processed
    int MAX=0;      //maximum number

    cout << "how much of number that you'll show : ";
    cin >> n;
    cout << "please fill the numbers : " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x > MAX)
        {
            MAX = x;
        }
    }
    cout << "the MAXIMUM number is : " << MAX << endl;

    cout << endl << "Apakah anda ingin mengulang program? (y/n): ";
    cin >> ulangi;
    cout << endl;
    }
}
