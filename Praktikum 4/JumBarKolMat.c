///*
//Nama Program    : JumBarKolMat.c
//Deskripsi       : Menjumlahkan semua elemen pada baris dan kolomnya
//Nama Pembuat    : Farid Rahman Fadhilah
//NIM             : 24060122140142
//Tanggal         : Selasa, 21 Maret 2023  23.35 WIB
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    //Kamus Lokal
//    int i,n,r,s;
//    int mat[n][n];
//    int rowsum[n];
//    int colsum[n];
//    scanf("%d",&n);
//
//    //Algoritma
//    for (r=0;r<n;r++){
//        colsum[r]=0;
//        rowsum[r]=0;
//    }
//    for (r=0;r<n;r++){
//        for (s=0;s<n;s++){
//            scanf("%d", &mat[r][s]);
//            rowsum[r]=rowsum[r]+mat[r][s];
//            colsum[s]=colsum[s]+mat[r][s];
//        }
//    }
//    for (r=0;r<n;r++){
//        printf("Baris ke-%d, %d\n", r, rowsum[r]);
//    }
//    for (s=0;s<n;s++){
//        printf("Kolom ke-%d, %d\n", s, colsum[s]);
//    }
//
//    return 0;
//}
