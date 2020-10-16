#include<iostream>
using namespace std;

main()
{
  char ulangi='y';
  while (ulangi=='y'){

  int x;    //decrement limitation
  int y;    //for side showing/typing
  int n;    //the number starts with

  cout << "input n : ";
  cin >> n;

  //maximum of n, increment & decrement of n
  for (x=n; x>=1; x--)
  {
    //side
    for (y=1; y<=x; y++)
    {
      cout << x;
    }
    //entering numbers in new line
    cout << endl;
  }

  cout << endl << "Apakah anda ingin mengulang program? (y/n): ";
  cin >> ulangi;
  cout << endl;
  }
}
