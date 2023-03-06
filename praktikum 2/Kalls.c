/*
Nama Program    : Kalls.c
Deskripsi       : Membuat kalkulator sederhana
Nama Pembuat    : Farid Rahman Fadhilah
NIM             : 24060122140142
Tanggal         : Senin, 6 Maret 2023  22.15 WIB
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    char P;
    int iA,iB,x;
    float y;

    //Algoritma
    printf("Masukan integer 1 : ");
    scanf("%d", &iA);
    printf("Masukan integer 2 : ");
    scanf("%d", &iB);
    printf("Masukan pilihan : ");
    scanf("%s", &P);

    switch (P){
    case 'a':
        x=iA+iB;
        printf("%d", x);
        break;
    case 'b':
        x=iA-iB;
        printf("%d", x);
        break;
    case 'c':
        x=iA*iB;
        printf("%d", x);
        break;
    case 'd':
        y=iA/iB;
        printf("%f", y);
        break;
    case 'e':
        x=iA/iA;
        printf("%d", x);
        break;
    case 'f':
        x=iA%iB;
        printf("%d", x);
        break;
    default:
        printf("Bukan pilihan menu yang benar");
    }
    return 0;
}
