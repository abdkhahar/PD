#include<iostream>
using namespace std;

main()
{
  char ulangi='y';
  while (ulangi=='y'){

  int pil;
  cout << "Menu Pola Segitiga :" << endl;
  cout << "1. Segitiga Pascal" << endl;
  cout << "2. Segitiga Genap" << endl;
  cout << "3. Segitiga Ganjil" << endl;
  cout << "Pilih menu : ";
  cin >> pil;


  if (pil == 1) //pascal
  {
    int a;
    cout << "Masukkan batas akhir : ";
    cin >> a;

    cout << endl;

    for (int i = 0; i <= a; i++)
    {
      for (int b = 0; b <= ((2 * a) - (2 * i)); b++)
      {
        cout << " ";
      }
      int angka;

      for (int c = 0; c <= i; c++)
      {
        if (c == 0 || i == c)
          angka = 1;
        else
          angka = angka * (i + 1 - c) / c;
        cout << "  ";
        cout << angka;
        cout << " ";
      }

      cout << " "
           << endl << endl << endl;
    }
  }


  else if (pil == 2) //genap
  {
    int a;

    cout << "Masukkan batas akhir : ";
    cin >> a;

    cout << endl;

    for (int i = 1; i <= a; i++)
    {
      for (int s = 0; s <= a - i; s++)
      {
        cout << " ";
      }

      for (int j = 0; j <= i + (i - 1); j++)
      {
        cout << "^";
      }

      cout << endl;
    }
  }


  else if (pil == 3) //ganjil
  {
    int a;

    cout << "Masukkan batas akhir : ";
    cin >> a;

    cout << endl;

    for (int i = 0; i <= a; i++)
    {
      for (int s = 0; s <= a - i; s++)
      {
        cout << " ";
      }

      for (int j = 0; j <= (i*2); j++)
      {
        cout << "^";
      }

      cout << endl;
    }
  }

  cout << endl << "Apakah anda ingin kembali ke menu? (y/n): ";
  cin >> ulangi;
  cout << endl;
  }
}
