
#include <stdio.h>

int main()
{
    int pilih, jumlah, harga, subtotal, lagi;
    int total = 0, bayar, kembali;

    do
    {
        printf("\n===== KASIR WARUNG =====\n");
        printf("1. Mie\n");
        printf("2. Susu\n");
        printf("3. Saos\n");

        printf("Pilih barang: ");
        scanf("%d", &pilih);

        printf("Jumlah beli (lusin): ");
        scanf("%d", &jumlah);

        harga = 0;

        if (jumlah > 0)
        {
            if (pilih == 1 || pilih == 2)
            {
                if (jumlah <= 10)
                    harga = 36000;
                else if (jumlah <= 20)
                    harga = 33600;
                else
                    harga = 20000;
            }
            else if (pilih == 3)
            {
                if (jumlah <= 10)
                    harga = 20000;
                else if (jumlah <= 20)
                    harga = 10000;
                else
                    harga = 5000;
            }

            if (harga > 0)
            {
                subtotal = harga * jumlah;
                total += subtotal;

                printf("Subtotal: Rp.%d\n", subtotal);
            }
            else
                printf("Pilihan tidak valid!\n");
        }
        else
            printf("Jumlah tidak valid!\n");

        printf("Tambah barang? (1=Ya, 0=Tidak): ");
        scanf("%d", &lagi);

    } while (lagi == 1);

    printf("\nTotal bayar: Rp.%d\n", total);

    do
    {
        printf("Uang bayar: Rp.");
        scanf("%d", &bayar);

        if (bayar < total)
            printf("Uang kurang!\n");

    } while (bayar < total);

    kembali = bayar - total;

    printf("Kembalian: Rp.%d\n", kembali);

    return 0;
}


