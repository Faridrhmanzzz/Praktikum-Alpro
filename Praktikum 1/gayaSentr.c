/*
Nama Program    : gayaSentr.c
Deskripsi       : Menghitung dan menampilkan gaya sentripetral
Nama Pembuat    : Farid Rahman Fadhilah
NIM             : 24060122140142
Tanggal         : Senin, 27 Februari 2023 23.23 WIB
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    float m;
    float v;
    float r;
    float F;

    //Algoritma
    printf("Masukkan nilai m: ");
    scanf("%f", &m);

    printf("Masukkan nilai v: ");
    scanf("%f", &v);

    printf("Masukkan nilai r: ");
    scanf("%f", &r);

    printf("Diketahui : \n");
    printf("m = %f\n", m);
    printf("v = %f\n", v);
    printf("r = %f\n", r);
    printf("F = m*((v*v)/r)\n");
    printf("F = %f*((%f*%f)/%f)\n", m, v , v, r);

    F = m*((v*v)/r);
    printf("F = %f", F);
    return 0;
}
