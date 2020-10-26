#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    string uname="abdkhahar", username, pw="khr27", password;

    cout << "--------------------------------" << endl;
    cout << "Selamat Datang, Silahkan Log In!" << endl;
    cout << "--------------------------------" << endl;
    cout << "username: "; cin >> username;
    cout << "password: "; cin >> password; cout << endl;

    if ((username==uname)&&(password==pw))
    {

    cout << "login successful!" << endl << endl;

    char final;
    while (final!='n')
    {

    int program;

    cout << "Menu Program" << endl;
    cout << "----------------------------------------" << endl;
    cout << "1. Program Konversi" << endl;
    cout << "2. Program Matematika" << endl;
    cout << "3. Program Pola Segitiga" << endl;
    cout << "4. Program Sederhana dalam Sehari - Hari" << endl;
    cout << "----------------------------------------" << endl << endl;

    cout << "Pilih program: "; cin >> program; cout << endl;

    switch (program)
    {

    case 1:
    {

        int menu;

        cout << "----------------" << endl;
        cout << "Program Konversi" << endl;
        cout << "----------------" << endl << endl;

        cout << "1. Biner dan Desimal" << endl;
        cout << "2. Meter dan Sentimeter" << endl;
        cout << "3. Pembalikan Digit Angka" << endl << endl;

        cout << "Pilih menu: "; cin >> menu; cout << endl;

        switch (menu)
        {

            case 1:
            {
                char pilih;

                cout << "// Konversi Biner dan Desimal //" << endl << endl;

                cout << "a. Biner ke Desimal" << endl;
                cout << "b. Desimal ke Biner" << endl << endl;

                cout << "Pilih: "; cin >> pilih; cout << endl;

                switch (pilih)
                {
                    case 'a':
                    {
                        int biner_awal, biner, digit_akhir, desimal=0, bobot=1;

                        cout << "Masukkan biner: "; cin >> biner_awal;

                        biner = biner_awal;

                        while ( biner!=0 )
                        {
                            digit_akhir = biner % 10;
                            desimal = desimal + ( digit_akhir*bobot );
                            biner = biner / 10;
                            bobot = bobot * 2;
                        }

                        cout << "Jika biner= " << biner_awal << ", maka desimal= " << desimal;
                    } break;

                    case 'b':
                    {
                        int desimal_awal, desimal, x=0, biner, sisa[x];

                        cout << "Masukkan desimal: "; cin >> desimal_awal;

                        desimal = desimal_awal;

                        cout << "Jika desimal= " << desimal_awal << ", maka biner= ";

                        do {
                            sisa[x]= desimal % 2;
                            desimal = desimal / 2;
                            x++;
                        } while (desimal!=0);

                        x=x-1;

                        for ( biner=x; biner>=0; biner-- ){
                            cout << sisa[biner] << " ";
                        }

                        getch();
                    } break;
                }

            } break;

            case 2:
            {
                char pilih;

                cout << "// Konversi Meter dan Sentimeter //" << endl << endl;

                cout << "a. Meter ke Sentimeter" << endl;
                cout << "b. Sentimeter ke Meter" << endl << endl;

                cout << "Pilih: "; cin >> pilih; cout << endl;

                switch (pilih)
                {
                    int panjang,m,cm;

                    case 'a':
                    {
                        cout << "Masukkan panjang (cm): ";
                        cin >> panjang;

                        m = panjang / 100;
                        cm = panjang % 100;

                        cout << "Hasil konversi= " << m << "." << cm << "m";
                    } break;

                    case 'b':
                    {
                        cout << "Masukkan panjang (m): ";
                        cin >> m;

                        cm = m * 100;

                        cout << "Hasil konversi= " << cm << " cm";
                    } break;
                }

            } break;

            case 3:
            {
                cout << "// Konversi Pembalikan Digit Angka //" << endl << endl;

                int bil;

                cout<<"Masukkan angka: "; cin>>bil;
                cout<<"Hasil pembalikan angka: ";

                while(bil>0)
                {
                    cout<<bil%10;
                    bil=(bil-bil%10)/10;
                }
            } break;

        }

        cout << endl << endl;

    } break;

    case 2:
    {

        int menu;

        cout << "------------------" << endl;
        cout << "Program Matematika" << endl;
        cout << "------------------" << endl << endl;

        cout << "1. Bilangan" << endl;
        cout << "2. Statistika" << endl;
        cout << "3. Perkalian" <<endl;
        cout << "4. Perpangkatan" <<endl;
        cout << "5. Pembagian" <<endl << endl;

        cout << "Pilih menu: "; cin >> menu; cout << endl;

        switch (menu)
        {
            case 1:
            {
                int pil, n, cacah, genap, gasal, a, fib1, fib2 ;

                cout << "// Menu Bilangan //" << endl;

                cout << "1. Bilangan Cacah " << endl;
                cout << "2. Bilangan Genap " << endl;
                cout << "3. Bilangan Gasal " << endl;
                cout << "4. Bilangan Fibonacci " << endl;

                cout << endl;

                cout << "Masukkan menu pilihan : ";
                cin >> pil;

                if (pil == 1)
                {
                    cout << "masukkan n (batas akhir): ";
                    cin >> n;
                    for (cacah = 0; cacah <= n;)
                    {
                        cout << cacah << endl;
                        cacah++;
                    }
                }
                else if (pil == 2)
                {
                    cout << "masukkan n (batas akhir): ";
                    cin >> n;
                    for (genap = 0; genap <= n; genap++)
                    {
                        cout << genap << endl;
                        genap++;
                    }
                }
                else if (pil == 3)
                {
                    cout << "masukkan n (batas akhir): ";
                    cin >> n;
                    for (gasal = 0; gasal <= n; gasal++)
                    {
                        gasal = gasal + 1;
                        cout << gasal << endl;
                    }
                }
                else if (pil == 4)
                {
                    cout << "masukkan n (batas akhir): ";
                    cin >> n;
                    for (a = 1; a <= n; ++a)
                    {
                        a = fib1 + fib2;
                        fib2 = fib1;
                        fib1 = a;
                        cout << a << endl;
                    }
                }
            } break;

            case 2:
            {
                int x, y;
                float total,jumlah,rata,max,min;

                cout << "// Statistika //" << endl;

                cout << "Masukkan banyak data : "; cin >> x; cout << endl;

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
            } break;

            case 3:
            {
                int m, n, total = 0;

                cout << "// Perkalian //" << endl;

                cout << endl << "Menghitung hasil m kali n" << endl;
                cout << "Masukkan nilai m : "; cin >> m;
                cout << "Masukkan nilai n : "; cin >> n;

                for (int i = 1; i <= n; i++) {
                    total = total + m;
                }

                cout << endl << "Hasil dari " << m << " kali " << n << " adalah " << total << endl;
            } break;

            case 4:
            {
                int m, n, total = 1;

                cout << "// Perpangkatan //" << endl;

                cout << endl << "Menghitung hasil m pangkat n" << endl;
                cout << "Masukkan nilai m : "; cin >> m;
                cout << "Masukkan nilai n : "; cin >> n;

                for (int i = 1; i <= n; i++) {
                    total = total * m;
                }

                cout << endl << "Hasil dari " << m << " pangkat " << n << " adalah " << total << endl;
            } break;

            case 5:
            {
                int a, b, hasil;

                cout << "// Pembagian //" << endl << endl;

                cout << "Masukkan bilangan pertama : "; cin >> a;
                cout << "Masukkan bilangan kedua : "; cin >> b;

                if(b==0){
                    cout <<"Tidak dapat dibagi nol!" << endl << endl;
                }
                else if (b!=0){
                    hasil=a/b;
                    cout << "Hasil = " << hasil << endl << endl;
                }
            } break;
        }

    } break;

    case 3:
    {
          int pil;

          cout << "---------------------" << endl;
          cout << "Program Pola Segitiga" << endl;
          cout << "---------------------" << endl << endl;

          cout << "1. Segitiga Pascal" << endl;
          cout << "2. Segitiga Genap" << endl;
          cout << "3. Segitiga Ganjil" << endl << endl;

          cout << "Pilih menu : "; cin >> pil;

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
    } break;

    case 4:
    {
        int pil;

        cout << "-----------------" << endl;
        cout << "Program Sederhana" << endl;
        cout << "-----------------" << endl <<endl;

        cout << "1. Grade Nilai" << endl;
        cout << "2. Keuntungan dan Harga Jual" << endl << endl;

        cout << "Pilih menu : "; cin >> pil;

        if (pil == 1)
        {
            int nt, np, uts, uas;
            float nilai, rata;

            cout << "// Grade Nilai //" << endl << endl;

            cout<<"input nilai tugas : "; cin>>nt;
            cout<<"input nilai partisipasi : "; cin>>np;
            cout<<"input nilai uts : "; cin>>uts;
            cout<<"input nilai uas : "; cin>>uas;

            nilai=((nt*0.3)+(np*0.2)+(uts*0.2)+(uas*0.3)); //nilai akhir dengan bobot
            rata=(nt+np+uts+uas)/4;

            cout<<"Nilai akhir : "<<nilai<<endl;
            cout<<"Nilai rata-rata : "<<rata<<endl;

            if ((nilai>=90)&&(nilai<=100))
                cout<<"Grade A"<<endl<<endl;
            else if ((nilai>=80)&&(nilai<90))
                cout<<"Grade B"<<endl<<endl;
            else if ((nilai>=70)&&(nilai<80))
                cout<<"Grade C"<<endl<<endl;
            else if ((nilai>=60)&&(nilai<70))
                cout<<"Grade D"<<endl<<endl;
            else if ((nilai>=0)&&(nilai<60))
                cout<<"Grade E"<<endl<<endl;
        }

        else if (pil==2)
        {
            double a,x,na,hj;

            cout << "// Keuntungan dan Harga Jual //" << endl << endl;

            cout<<"input harga barang: Rp."; cin>>a;
            cout<<"persentase untung yang diinginkan:"; cin>>x;

            na=a*x/100;
            hj=a+na;

            cout<<"keuntungan yang didapat: Rp."<<na<<endl;
            cout<<"harga jual: Rp."<<hj;
        }
    } break;

    }
        cout << endl << "Apakah anda ingin kembali ke menu utama program? (y/n): ";
        cin >> final;
        cout << endl;

    }

    }

    else if ((username!=uname)&&(password==pw))
        cout<<"invalid username!"<<endl<<endl;
    else if ((username==uname)&&(password!=pw))
        cout<<"invalid password!"<<endl<<endl;
    else if ((username!=uname)&&(password!=pw))
        cout<<"invalid username and password!"<<endl<<endl;

}
