/*
Nama Program    : CekBilSemp.c
Deskripsi       : Menentukan apakah N bilangan sempurna
Nama Pembuat    : Farid Rahman Fadhilah
NIM             : 24060122140142
Tanggal         : Rabu, 8 Maret 2023  22.41 WIB
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    int N, i, s;

    //Algoritma
    printf("Nilai yang dibaca : ");
    scanf("%d", &N);
    i=1;
    s=0;
    if (N>0){
        while (i<N){
            if (N % i ==0){
                s = s + i;
                i = i + 1;
            }
            else{
                i = i + 1;
            }
        }
    }
    if (s==N){
        printf("Bilangan Sempurna");
    }
    else{
        printf("Bukan Bilangan Sempurna");
    }
    return 0;
}
