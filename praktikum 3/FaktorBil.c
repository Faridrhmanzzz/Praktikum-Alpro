/*
Nama Program    : FaktorBil.c
Deskripsi       : Menampilkan faktor bilangan dari masukan bilangan integer
Nama Pembuat    : Farid Rahman Fadhilah
NIM             : 24060122140142
Tanggal         : Rabu, 8 Maret 2023  22.21 WIB
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    int N, i;

    //Algoritma
    printf("Input bilangan : ");
    scanf("%d", &N);
    if (N<=0){
        printf("Nilai N harus integer positif");
    }
    else{
        for(i=1;i<=N;i++){
            if (N%i==0){
                printf(", %d", i);
            }
        }
    }
    return 0;
}
