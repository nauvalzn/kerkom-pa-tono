#include <stdio.h>

int main()
{
    int pilih, jumlah, harga, subtotal, lagi;
    int total = 0;
    int bayar, kembali;

    printf("=== KASIR WARUNG (HARGA LUSINAN) ===\n");

    do
    {
        printf("\nDaftar Barang:\n");
        printf("1. Mie\n");
        printf("2. Susu\n");
        printf("3. Saos\n");
        printf("Pilih barang (1-3)   : ");
        scanf("%d", &pilih);
        printf("Jumlah beli (lusin)  : ");
        scanf("%d", &jumlah);

        harga = 0;

        if (jumlah > 0)
        {
            if (pilih == 1)   /* Mie */
            {
                if (jumlah <= 10)
                    harga = 36000;
                else if (jumlah <= 20)
                    harga = 33600;
                else
                    harga = 32400;
            }
            else if (pilih == 2)   /* Susu */
            {
                if (jumlah <= 10)
                    harga = 30000;
                else if (jumlah <= 20)
                    harga = 27600;
                else
                    harga = 26400;
            }
            else if (pilih == 3)   /* Saos */
            {
                if (jumlah <= 10)
                    harga = 12000;
                else if (jumlah <= 20)
                    harga = 9600;
                else
                    harga = 8400;
            }
        }

        if (harga == 0)
        {
            printf("Input tidak valid, barang tidak dicatat.\n");
        }
        else
        {
            subtotal = harga * jumlah;
            total = total + subtotal;
            printf("Harga per lusin      : Rp. %d\n", harga);
            printf("Subtotal             : Rp. %d\n", subtotal);
        }

        printf("Tambah barang lagi? (1=Ya, 0=Tidak): ");
        scanf("%d", &lagi);

    } while (lagi == 1);

    printf("\nTOTAL BAYAR          : Rp. %d\n", total);

    do
    {
        printf("Uang konsumen        : Rp. ");
        scanf("%d", &bayar);
        if (bayar < total)
            printf("Uang kurang! Masukkan lagi.\n");
    } while (bayar < total);

    kembali = bayar - total;
    printf("Kembalian            : Rp. %d\n", kembali);

    return 0;
}