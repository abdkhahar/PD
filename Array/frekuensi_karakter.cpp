#include<stdio.h>
#include<iostream>
using namespace std;

main ()
{
    int b, x, y, z, e;
    printf("Masukkan jumlah karakter yang akan dihitung:\n");
    printf("Baris: "); scanf("%d", &b);
    printf("Kolom: "); scanf ("%d", &x);
    printf("\n");
    char kar1[b][x], p;
    int kar2[b][x];

    for (int a=0; a<b; a++)
    {
        for (int i=0; i<x; i++)
        {
            cin.ignore();
            printf("Masukkan karakter baris ke-%d", a+1);
            printf(",kolom ke-%d:", i+1);
            scanf("%c", &kar1[a][i]);
        }
    }

    printf("\nKarakter yang dimasukkan:\n");
    for (int a=0; a<b; a++)
    {
        for (int i=0; i<x; i++)
        {
            printf("%c", kar1[a][i]);
            printf(" ");
        }
        printf("\n");
    }

    for (int c=0; c<b; c++)
    {
        for (int j=0; j<x; j++)
        {
            e=0;
            for (int d=0; d<b; d++)
            {

                for (int f=0; f<x; f++)
                {

                    if (kar1[c][j] == kar1[d][f])
                    {
                        e++;
                        kar2[c][j] = e;
                    }
                }
            }
        }
    }

    printf ("\nMasukkan karakter yang ingin dihitung: ");
    cin.ignore();
    scanf("%c", &p);

    for (int c=0; c<b; c++)
    {
        for (int j=0; j<x; j++)
        {
            if (c>0&&j>0)
            {
                for (int d=0; d<c; d++)
                {
                    for (int f=0; f<j; f++)
                    {
                        if (kar1[c][j] == kar1[d][f] && kar2[c][j] == kar2[d][f])
                        {
                            goto stop;

                        }
                    }
                }
            }
            if (kar1[c][j] == p)
            {
            printf ("\nFrekuensi %c = %d\n", kar1[c][j], kar2[c][j]);
            stop:

                c--;
                c++;
            }
        }
    }
}
