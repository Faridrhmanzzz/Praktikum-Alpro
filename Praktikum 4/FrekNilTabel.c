///*
//Nama Program    : FrekNilTabel.c
//Deskripsi       : Menampilkan nilai elemen yang frekuensi kemunculannya lebih dari satu
//Nama Pembuat    : Farid Rahman Fadhilah
//NIM             : 24060122140142
//Tanggal         : Selasa, 21 Maret 2023  21.43 WIB
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    //Kamus Lokal
//    int n,i;
//    printf("masukan n :");
//    scanf("%d", &n);
//    int t[n+1];
//
//    //Algoritma
//    int max=0;
//    printf("masukan elemen :");
//    for (i=1;i<=n;i++){
//        scanf("%d", &t[i]);
//        if (t[i]> max){
//            max=t[i];
//        }
//    }
//    int f[max+1];
//    for(i=1;i<=max;i++){
//        f[i]=0;
//    }
//    for (i=1;i<=n;i++){
//        f[t[i]]=f[t[i]]+1;
//    }
//    for (i=1;i<=n;i++){
//        if (f[t[i]]>1){
//            printf("%d, ", t[i]);
//            f[t[i]]=0;
//        }
//    }
//    return 0;
//}
