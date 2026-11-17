#include <stdio.h>

main()
{
    int harga, total, subtotal, kembalian, pilihan ,jenis;
    printf("1.Mie");
    printf("2.Kopi");
    printf("3.Teh");

    printf("Mau Pilih Mana");
    scanf("%d",&pilihan);

    switch (pilihan)
    {
    case 1:
        printf("Anda memilih Mie");
        break;
    case 2:
        printf("Anda memilih kopi");
        break;
    case 3:
        printf("Anda memilih teh");
        break;
    default:
    printf("Pilihan Tdk tersedia");
        break;
    }
    printf("jenis pembelian");
    printf("1.satuan");
    printf("2.lusinan");
    printf("3.kodian");

    printf("pilih jenis pembelian");
    scanf("%d", &jenis);
}