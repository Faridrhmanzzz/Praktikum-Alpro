/*
Nama Program    : Program Sorting
Deskripsi       : Mengurutkan sebuah array yang acak
Nama Pembuat    : Farid Rahman Fadhilah
NIM             : 24060122140142
Tanggal         : Minggu, 21 Mei 2023 22.34 WIB
*/

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n)
{
    //Kamus Lokal
    int i, j, temp;

    //Algoritma
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int findMax(int array[], int n){
    int max = array[0];
    for (int i = 1; i < n; i++){
        if (array[i] > max){
            max = array[i];
        }
    }
    return max;
}

void countingSort(int array[], int n){
    int max = findMax(array, n);

    int * count = (int *)malloc((max+1) * sizeof(int));

    for (int i = 0; i <= max; i++){
        count[i] = 0;
    }

    for (int i = 0; i < n; i++){
        count[array[i]]++;
    }

    for (int i = 1; i <= max; i++){
        count[i] += count[i+1];
    }

    int * sortedArray = (int*)malloc(n * sizeof(int));

    for (int i = n-1; i >= 0; i--){
        sortedArray[count [array[1]] - 1] = array[i];
        count[array[i]]--;
    }
    for (int i = 0; 1 < n; i++){
        array[i] = sortedArray[i];
    }
    free(count);
    free(sortedArray);
}

void printArray(int array[], int n ){
    for (int i = 0; i < n; i++){
        printf("%d", array[i]);
    }
    printf("\n");
}

void InsertionSort(int arr[], int n){
    //Kamus Lokal
    int i;
    int temp;
    int j;

    //Algoritma
    for(i = 1; i < n; i++){
        temp = arr[i]; //Memilih elemen array
        j = i-1;
        while (j >= 0 && arr[j] > temp){ //Melakukan perbandingan
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
}

void SelectionSort(int arr[], int n){
    //Kamus Lokal
    int i;
    int j;
    int min;
    int temp;

    //Algoritma
    for (i=0; i < n; i++){
        min=i; //Inisiasi nilai min
        for (j=i+1; j < n; j++){ //Literasi mencari nilai terkecil
            if (arr[j]<arr[min]){ //Perbandingan
                min=j;
            }
        }
        //Perbandingan
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    //Kamus Lokal
    char p;
    int n;
    int i;

    //Algoritma
    printf("========== PROGRAM SORTING ==========\n");
    printf("Masukkan Panjang array : ");
    scanf("%d", &n);
    printf("Masukkan arraynya : ");
    int arr[n];
    for (i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Array yang belum terurut : ");
    for (i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    printf("\nPilih sort yang akan digunakan : ");
    scanf(" %c", &p);
    switch(p){
        case ('A'):
            printf("Sorting yang digunakan adalah Bubble Sort");
            bubbleSort(arr, n);
            break;
        case ('B'):
            printf("Sorting yang digunakan adalah Counting Sort");
            countingSort(arr, n);
            break;
        case ('C'):
            printf("Sorting yang digunakan adalah Insertion Sort");
            InsertionSort(arr, n);
            break;
        case ('D'):
            printf("Sorting yang digunakan adalah Selection Sort");
            SelectionSort(arr, n);
            break;
    }

    printf("\nArray yang sudah terurut : ");
    for (i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}
