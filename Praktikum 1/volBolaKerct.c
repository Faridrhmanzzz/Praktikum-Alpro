/*
Nama Program    : volBolaKerct.c
Deskripsi       : Menghitung dan menampilkan volume bola dan volume kerucut
Nama Pembuat    : Farid Rahman Fadhilah
NIM             : 24060122140142
Tanggal         : Senin, 27 Februari 2023 22.41 WIB
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    float r,Vb,Vk;
    const float PHI = 3.1415;

    //Algoritma
    printf("program volume bola kerucut \n");
    printf("masukkan nilai r; ");
    scanf("%f", &r);

    Vb = (4/3) * (PHI * r * r * r);
    printf("volume bola adalah: %.2f\n", Vb);

    Vk = (Vb/2);
    printf("volume kerucut adalah; %.2f",Vk);
    return 0;
}
