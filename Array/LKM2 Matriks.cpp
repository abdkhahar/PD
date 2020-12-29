#include<iostream>
using namespace std;

main()
{
    system("cls");
    int m=3, n=3, matriks[3][3], transpose[3][3], sum[3][3];

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cout << "Masukkan elemen matriks A baris ke-" << i+1 << " dan kolom ke-" << j+1 << ": ";
            cin >> matriks[i][j];
        }
        cout << endl;
    }

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            transpose[i][j] = matriks[j][i];
        }
    }

    cout << "Jika matriks A =" << endl;

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
        cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << "Maka matriks transpose A =" << endl;

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
        cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << "Jumlah matriks A dan matriks transpose A adalah: " << endl;

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            sum[i][j] = matriks[i][j] + transpose[i][j];
            cout << matriks[i][j] << "+" << transpose[i][j] << " ";
        }
        cout << endl;
    }

    cout << "=" << endl;

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}
