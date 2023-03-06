/*
Nama Program    : hitungTahanan.c
Deskripsi       : Menentukan hasil total tahanan
Nama Pembuat    : Farid Rahman Fadhilah
NIM             : 24060122140142
Tanggal         : Senin, 6 Maret 2023  21.30 WIB
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    int r,s,t,u;

    //Algoritma
    printf("Masukan tahanan : ");
    scanf("%d", &r);
    printf("Masukan tahanan : ");
    scanf("%d", &s);
    printf("Masukan tahanan : ");
    scanf("%d", &t);
    if (r>=0 && s>=0 && t>=0){
        u=(r+s+t);
        printf("%d", u);
    }
    else{
        printf("Masukan tahanan tidak boleh negatif");
    }
    return 0;
}
