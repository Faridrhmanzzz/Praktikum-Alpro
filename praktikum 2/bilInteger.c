/*
Nama Program    : bilInteger.c
Deskripsi       : Menentukan termasuk manakah sebuah bilangan
Nama Pembuat    : Farid Rahman Fadhilah
NIM             : 24060122140142
Tanggal         : Selasa, 28 Februari 2023  16.53 WIB
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    int i;

    //Algoritma
    printf("Masukkan bilangan");
    if (scanf("%d", &i)){
        if (i>=0){
            if (i>0){
            printf("bilangan bulat positif");
            }
            else{
                printf("nol");
            }
        }
        else{
            printf("bulat negative");
        }
    }
    else{
        printf("Bukan termasuk sebuah bilangan");
    }
}
