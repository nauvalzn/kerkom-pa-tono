#include <stdio.h>

main()
{
    int harga, total, subtotal, kembalian, pilihan, jenis, jumlah;
    puts("1.Mie");
    puts("2.Kopi");
    puts("3.Teh");

    puts("Mau Pilih Mana");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
    case 1:
        puts("Anda memilih Mie");
        break;
    case 2:
        puts("Anda memilih kopi");
        break;
    case 3:
        puts("Anda memilih teh");
        break;
    default:
        puts("Pilihan Tdk tersedia");
        break;
    }
    puts("jenis pembelian");
    puts("1.satuan");
    puts("2.lusinan");
    puts("3.kodian");

    puts("pilih jenis pembelian");
    scanf("%d", &jenis);

    switch (pilihan)
    {
    case 1:
        switch (jenis)
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

        default:
            printf("Pilihan tidak tersedia");
            break;
        }
        break;

    case 2:
        switch (jenis)
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
        switch (jenis)
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
    printf("Masukan Jumlah yg ingin di beli");
    scanf("%d", &jumlah);
    
}