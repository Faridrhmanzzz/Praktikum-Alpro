/*
Nama Program    : namaHari.c
Deskripsi       : Menentukan nama hari berdasarkan nomor
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
        printf("Senin");
        break;
    case (2):
        printf("Selasa");
        break;
    case (3):
        printf("Rabu");
        break;
    case (4):
        printf("Kamis");
        break;
    case (5):
        printf("Jumat");
        break;
    case (6):
        printf("Sabtu");
        break;
    case (7):
        printf("Minggu");
        break;
    default:
        printf("Masukan nomor hari tidak tepat");
    }
    return 0;
}
