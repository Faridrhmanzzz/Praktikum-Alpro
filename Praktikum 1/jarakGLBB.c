/*
Nama Program    : jarakGLBB.c
Deskripsi       : Menghitung dan menampilkan jarak yang ditempuh benda yang mengalami GLBB
Nama Pembuat    : Farid Rahman Fadhilah
NIM             : 24060122140142
Tanggal         : Senin, 27 Februari 2023 22.40 WIB
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    float v0;
    float t;
    float a;
    float s;

    //Algoritma
    printf("Masukkan Kecepatan Awal: ");
    scanf ("%f", &v0);

    printf("Masukkan waktu: ");
    scanf("%f", &t);

    printf("Masukkan percepatan: ");
    scanf("%f", &a);

    s = v0 * t + 0.5 * (a*pow(t,2));

    printf("s = %f\n",s);
    return 0;
}
