/*
Nama Program    : luasKellLayang.c
Deskripsi       : Menghitung dan menampilkan luas dan keliling layang-layang
Nama Pembuat    : Farid Rahman Fadhilah
NIM             : 24060122140142
Tanggal         : Senin, 27 Februari 2023 23.47 WIB
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    float s1, s2, d1, d2, Luas, Kell;

    //Algoritma
    printf("Masukkan nilai s1: ");
    scanf("%f", &s1);

    printf("Masukkan nilai s2: ");
    scanf("%f", &s2);

    printf("Masukkan nilai d1: ");
    scanf("%f", &d1);

    printf("Masukkan nilai d2: ");
    scanf("%f", &d2);

    Luas = 0.5 * d1 * d2;
    Kell = 2 * (s1+s2);

    printf("Luas layang-layang adalah: %.2f \n", Luas);
    printf("Keliling layang-layang adalah: %.2f", Kell);
    return 0;
}
