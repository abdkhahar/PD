#include<iostream>
using namespace std;

main()
{
    char ulangi='y';
    while (ulangi=='y'){

    int x;  //banyak data
    int y;  //bil. ke-
    float total,jumlah,rata,max,min;
    cout << "Masukkan banyak data : ";
    cin >> x;
    cout << endl;

    for( y=1; y<=x; y++ )
    {
        cout << "Masukkan Bil ke-" << y << " : ";
        cin >> total;

        if(y==1){
            max = total;
            min = total;
        }else if(total<min){
            min = total;
        }else if(total>max){
            max = total;
        }

        jumlah = jumlah + total;
        rata = jumlah / x;
    }
    cout << endl;
    cout << "Max     : " << max << endl;
    cout << "Min     : " << min << endl;
    cout << "Average : " << rata << endl;
    cout << "Total   : " << jumlah << endl;


    cout << endl << "Apakah anda ingin mengulang program? (y/n): ";
    cin >> ulangi;
    cout << endl;
    }
}
