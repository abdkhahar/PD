#include<iostream>
#include<cstdlib>
using namespace std;

main()
{
    int mhs=10, nilai[mhs];

    cout << "Masukkan nilai dari 10 mahasiswa: " << endl;

    for(int i=0; i<mhs; i++){
        cout << "Mahasiswa ke-" << i+1 << ": ";
        cin >> nilai[i];
    }

    system("cls");
    
    cout << endl;
    cout << "Data Kelulusan Mahasiswa:" << endl;

    for(int i=0; i<mhs; i++){
            if (nilai[i]>=60)
            cout << "Mahasiswa ke-" << i+1 << ": " << nilai[i] << " LULUS" << endl;
    }

    cout << endl;
    cout << "*nama yang tidak tercantum berarti TIDAK LULUS" << endl;
}
