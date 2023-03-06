/*
Nama Program    : jarakPBola.c
Deskripsi       : Menghitung dan menampilkan hasil dari jarak yang ditempuh benda yang mengalami gerak parabola
Nama Pembuat    : Farid Rahman Fadhilah
NIM             : 24060122140142
Tanggal         : Senin, 27 Februari 2023 22.54 WIB
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    float v0,t,y;
    const float g = 9.8;

    //Algoritma
    printf("Masukkan nilai v0 : ");
    scanf("%f", &v0);

    printf("Masukkan nilai t : ");
    scanf("%f", &t);

    y = v0 * t - (g*t*t)/2;

    printf("y = %.2f", y);
    return 0;

}
