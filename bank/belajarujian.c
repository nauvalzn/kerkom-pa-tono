
#include <stdio.h>

int main()
{
    int pilih, jumlah, harga, subtotal, lagi;
    int total = 0;
    int bayar, kembali;

    printf("===== KASIR WARUNG =====\n");

    do
    {
        printf("\n===== DAFTAR BARANG =====\n");
        printf("1. Mie\n");
        printf("2. Susu\n");
        printf("3. Saos\n");

        printf("Pilih Barang (1-3): ");
        scanf("%d", &pilih);

        printf("Jumlah Beli (Lusin): ");
        scanf("%d", &jumlah);

        harga = 0;

        if (jumlah > 0)
        {
            if (pilih == 1)
            {
                if (jumlah <= 10)
                    harga = 36000;
                else if (jumlah <= 20)
                    harga = 33600;
                else
                    harga = 20000;
            }
            else if (pilih == 2)
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

            if (harga == 0)
            {
                printf("Input tidak valid, barang tidak tercatat\n");
            }
            else
            {
                subtotal = harga * jumlah;
                total = total + subtotal;

                printf("Harga per lusin: Rp.%d\n", harga);
                printf("Sub Total      : Rp.%d\n", subtotal);
            }
        }
        else
        {
            printf("Jumlah pembelian tidak valid!\n");
        }

        printf("\nTambah barang lagi? (1=Ya, 0=Tidak): ");
        scanf("%d", &lagi);

    } while (lagi == 1);

    printf("\nTotal Bayar: Rp.%d\n", total);

    do
    {
        printf("Uang konsumen: Rp.");
        scanf("%d", &bayar);

        if (bayar < total)
            printf("Uang kurang, masukkan lagi!\n");

    } while (bayar < total);

    kembali = bayar - total;

    printf("Kembalian: Rp.%d\n", kembali);

    return 0;
}
