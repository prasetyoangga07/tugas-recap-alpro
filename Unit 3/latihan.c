#include<stdio.h>

int main(){
    int elemen,nilai = 0;
    printf("Jumlah elemen yang dimasukan pada array: ");
    scanf("%d", &elemen);

    int Angka[elemen];
    for(int i = 0;i<elemen;i++){
        printf("Masukkan nilai angka ke %d : ", i+1);
        scanf("%d", &Angka[i]);
        nilai += Angka[i];
    }

    printf("Hasil penjumlahan seluruh elemen pada array adalah %d", nilai);

return 0;
}