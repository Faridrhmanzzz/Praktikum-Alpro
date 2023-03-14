/*
Nama Program    : BilSempN.c
Deskripsi       : Menentukan bilangan sempurna sampai dengan N
Nama Pembuat    : Farid Rahman Fadhilah
NIM             : 24060122140142
Tanggal         : Rabu, 8 Maret 2023  23.10 WIB
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    int i, j, N, k;

    //Algoritma
    printf("Banyaknya bilangan ; ");
    scanf("%d", &N);
    i=1;
    j=1;
    if (N<0){
        printf("Masukan N harus positif");
    }
    else{
        for (i=1; i<N; i++){
            k = 0;
            for (j=1; j<i; j++){
                if (i % j == 0){
                    k = k + j;
                }
            }
            if (k==i){
                printf("%d", i);
            }
        }
    }
    return 0;
}
