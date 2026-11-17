#include <stdio.h>

int main() {
    /* Tabel harga: baris = barang (Mie, Kopi, Teh)
       kolom = satuan (Satuan, Lusin, Kodi) */
    int harga[3][3] = {
        {3000, 33000, 60000},   /* Mie  */
        {2000, 23000, 43000},   /* Kopi */
        {1500, 16000, 32000}    /* Teh  */
    };
    char namaBarang[3][10] = {"Mie", "Kopi", "Teh"};
    char namaSatuan[3][10] = {"Satuan", "Lusin", "Kodi"};

    int pilihBarang, pilihSatuan, jumlah;
    int subtotal, total = 0, bayar, kembalian;

    printf("===== PROGRAM KASIR WARUNG =====\n");

    do {
        printf("\n--- Menu Barang ---\n");
        printf("1. Mie\n");
        printf("2. Kopi\n");
        printf("3. Teh\n");
        printf("0. Selesai / Bayar\n");
        printf("Pilih barang (0-3): ");
        scanf("%d", &pilihBarang);

        if (pilihBarang >= 1 && pilihBarang <= 3) {
            printf("\nPilih jenis penjualan:\n");
            printf("1. Satuan\n");
            printf("2. Lusin\n");
            printf("3. Kodi\n");
            printf("Pilih satuan (1-3): ");
            scanf("%d", &pilihSatuan);

            if (pilihSatuan < 1 || pilihSatuan > 3) {
                printf("Pilihan satuan tidak valid!\n");
                continue;
            }

            printf("Jumlah: ");
            scanf("%d", &jumlah);

            if (jumlah <= 0) {
                printf("Jumlah tidak valid!\n");
                continue;
            }

            subtotal = harga[pilihBarang - 1][pilihSatuan - 1] * jumlah;
            total = total + subtotal;

            printf("%s %d (%s) = Rp. %d\n",
                   namaBarang[pilihBarang - 1], jumlah,
                   namaSatuan[pilihSatuan - 1], subtotal);
        } else if (pilihBarang != 0) {
            printf("Pilihan tidak valid!\n");
        }

    } while (pilihBarang != 0);

    if (total == 0) {
        printf("\nTidak ada barang yang dibeli.\n");
        return 0;
    }

    printf("\n===============================\n");
    printf("Total bayar     : Rp. %d\n", total);

    do {
        printf("Uang konsumen   : Rp. ");
        scanf("%d", &bayar);
        if (bayar < total) {
            printf("Uang kurang! Kurang Rp. %d\n", total - bayar);
        }
    } while (bayar < total);

    kembalian = bayar - total;
    printf("Kembalian       : Rp. %d\n", kembalian);
    printf("===============================\n");
    printf("Terima kasih!\n");

    return 0;
}