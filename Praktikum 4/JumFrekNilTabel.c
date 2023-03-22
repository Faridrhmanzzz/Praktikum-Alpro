///*
//Nama Program    : JumFrekNilTabel.c
//Deskripsi       : Menampilkan jumlah nilai-nilai elemen tabel yang frekuensi kemunculannya lebih dari satu
//Nama Pembuat    : Farid Rahman Fadhilah
//NIM             : 24060122140142
//Tanggal         : Selasa, 21 Maret 2023  22.08 WIB
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    //Kamus Lokal
//    int n;
//    scanf("%d", &n);
//    int t[n+1];
//    int y,i,jum;
//
//    //Algoritma
//    y=0;
//    jum=0;
//
//    for(i=1;i<=n;i++){
//        scanf("%d",&t[i]);
//        if (t[i]>y){
//            y=t[i];
//        }
//    }
//
//    int f[y+1];
//    for(i=1;i<=y;i++){
//        f[i]=0;
//    }
//    for (i=1;i<=n;i++){
//        f[t[i]]=f[t[i]]+1;
//    }
//    for (i=1;i<=n;i++){
//        if (f[t[i]]>1){
//            jum=jum+t[i];
//        }
//    }
//    printf("%d", jum);
//
//    return 0;
//}
