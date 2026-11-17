#include <stdio.h>

main()
{
    int harga, total, subtotal, kembalian, pilihan, jenis;
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
}