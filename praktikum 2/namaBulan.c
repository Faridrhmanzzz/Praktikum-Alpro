/*
Nama Program    : namaBulan.c
Deskripsi       : Menentukan nama bukan berdasarkan nomor
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
    printf("Masukkan nomor : ");
    scanf("%d", &i);

    switch(i){
    case (1):
        printf("Januari");
        break;
    case (2):
        printf("Februari");
        break;
    case (3):
        printf("Maret");
        break;
    case (4):
        printf("April");
        break;
    case (5):
        printf("Mei");
        break;
    case (6):
        printf("Juni");
        break;
    case (7):
        printf("Juli");
        break;
    case (8):
        printf("Agustus");
        break;
    case (9):
        printf("September");
        break;
    case (10):
        printf("Oktober");
        break;
    case (11):
        printf("November");
        break;
    case (12):
        printf("Desember");
        break;
    default:
        printf("Masukan nomor bulan tidak tepat");
    }
    return 0;
}

