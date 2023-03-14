/*
Nama Program    : BilPrimaN.c
Deskripsi       : Mengecek bilangan-bilangan prima dengan N
Nama Pembuat    : Farid Rahman Fadhilah
NIM             : 24060122140142
Tanggal         : Rabu, 8 Maret 2023  22.52 WIB
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    int N, i, j, p;

    //Algoritma
    printf("Sembarang integer : ");
    scanf("%d", &N);
    if (N<=0){
        printf("Nilai N harus positif");
    }
    else{
        for (i=2; i<=N; i++){
            p = 0;
            for (j=2; j<=i; j++){
                if (i % j == 0){
                    p = p + 1;
                }
            }
            if (p==1){
                printf("%d", i);
            }
        }
    }
    return 0;
}
