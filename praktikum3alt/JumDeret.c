/*
Nama Program    : JumDeret.c
Deskripsi       : Menghitung jumlah total dari deret bilangan
Nama Pembuat    : Farid Rahman Fadhilah
NIM             : 24060122140142
Tanggal         : Rabu, 8 Maret 2023  22.12 WIB
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    int i,N,sum;

    //Algoritma
    printf("Nilai yang dibaca : ");
    scanf("%d",&N);
    sum = 0;
    if (N>0){
        for (i=1;i<=N;i++){\
            sum = sum+ i;
        }
    }
    printf("%d", sum);
    return 0;
}
