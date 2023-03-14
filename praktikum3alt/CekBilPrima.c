/*
Nama Program    : CekBilPrima.c
Deskripsi       : Menentukan sembarang integer, apakah prima dan menampilkan pada layar
Nama Pembuat    : Farid Rahman Fadhilah
NIM             : 24060122140142
Tanggal         : Rabu, 8 Maret 2023  22.29 WIB
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    int N, i, p;

    //Algoritma
    printf("Input bilangan : ");
    scanf("%d", &N);
    p=0;
    i=2;
    if (N>0){
        while (i<=N){
            if (N%i!=0){
                i = i + 1;
            }
            else{
                p = p + 1;
                i = i + 1;
            }
        }
    }
    else{
        printf("Nilai integer tidak boleh negatif");
    }
    if (p==1){
        printf("Bilangan Prima");
    }
    else{
        printf("Bukan Bilangan Prima");
    }
    return 0;
}
