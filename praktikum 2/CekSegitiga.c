/*
Nama Program    : CekSegitiga.c
Deskripsi       : Menentukan jenis segitiga
Nama Pembuat    : Farid Rahman Fadhilah
NIM             : 24060122140142
Tanggal         : Senin, 6 Maret 2023  22.01 WIB
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    int s1,s2,s3;

    //Algoritma
    printf("Sisi Segitiga : ");
    scanf("%d", &s1);
    printf("Sisi Segitiga : ");
    scanf("%d", &s2);
    printf("Sisi Segitiga : ");
    scanf("%d", &s3);
    if (s1>0 && s2>0 && s3>0){
        if (s1==s2 && s1==s3){
            printf("Segitiga Sama Sisi");
        }
        else{
            if (s1==s2 || s1==s3){
                if (s1!=s2 || s1!=s3){
                    printf("Segitiga Sama Kaki");
                }
            }
            else {
                printf("Segitiga Sembarang");
            }
        }
    }
    else{
        printf("Terdapat nilai yang bukan sisi segitiga");
    }
}
