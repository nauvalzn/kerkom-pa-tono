
#include <stdio.h>

main()
{
    int pilihBarang, pilihSatuan, jumlah;
    int harga, subtotal;
    int total = 0, bayar, kembalian;

    printf("===== PROGRAM KASIR WARUNG =====\n");

    do
    {
        printf("\n--- Menu Barang ---\n");
        printf("1. Mie\n");
        printf("2. Kopi\n");
        printf("3. Teh\n");
        printf("0. Selesai / Bayar\n");

        printf("Pilih barang (0-3): ");
        scanf("%d", &pilihBarang);

        if (pilihBarang >= 1 && pilihBarang <= 3)
        {
            printf("\nJenis Penjualan:\n");
            printf("1. Satuan\n");
            printf("2. Lusinan\n");
            printf("3. Kodian\n");

            printf("Pilih satuan (1-3): ");
            scanf("%d", &pilihSatuan);

            printf("Jumlah: ");
            scanf("%d", &jumlah);

            harga = 0;

            if (jumlah > 0)
            {
                switch (pilihBarang)
                {
                case 1:
                    switch (pilihSatuan)
                    {
                    case 1:
                        harga = 3000;
                        break;
                    case 2:
                        harga = 33000;
                        break;
                    case 3:
                        harga = 60000;
                        break;
                    }
                    break;

                case 2:
                    switch (pilihSatuan)
                    {
                    case 1:
                        harga = 2000;
                        break;
                    case 2:
                        harga = 23000;
                        break;
                    case 3:
                        harga = 43000;
                        break;
                    }
                    break;

                case 3:
                    switch (pilihSatuan)
                    {
                    case 1:
                        harga = 1500;
                        break;
                    case 2:
                        harga = 16000;
                        break;
                    case 3:
                        harga = 32000;
                        break;
                    }
                    break;
                }
            }

            if (harga == 0)
            {
                printf("Input tidak valid!\n");
            }
            else
            {
                subtotal = harga * jumlah;
                total = total + subtotal;

                printf("Subtotal : Rp. %d\n", subtotal);
            }
        }
        else if (pilihBarang != 0)
        {
            printf("Pilihan barang tidak valid!\n");
        }

    } while (pilihBarang != 0);

    if (total == 0)
    {
        printf("\nTidak ada barang yang dibeli.\n");
        return 0;
    }

    printf("\nTotal bayar : Rp. %d\n", total);

    do
    {
        printf("Uang konsumen : Rp. ");
        scanf("%d", &bayar);

        if (bayar < total)
        {
            printf("Uang kurang! Kurang Rp. %d\n", total - bayar);
        }

    } while (bayar < total);

    kembalian = bayar - total;

    printf("Kembalian : Rp. %d\n", kembalian);
    printf("Terima kasih!\n");

    return 0;
}
