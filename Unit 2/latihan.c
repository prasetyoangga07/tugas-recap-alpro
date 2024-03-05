#include <stdio.h>

int main() {
    int Jumlah, i, transaksi, Total = 0;

    printf("Jumlah transaksi: ");
    scanf("%d", &Jumlah);

    if (Jumlah <= 0) {
        printf("Tidak ada transaksi hari ini");
        return 0;
    }

    for (i = 1; i <= Jumlah; ++i) {
        printf("Masukkan nominal transaksi ke-%d: ", i);
        scanf("%d", &transaksi);
        Total += transaksi;
    }

    printf("Total pengeluaran hari ini: %d", Total);

    return 0;
}
