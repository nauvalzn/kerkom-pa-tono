
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
    char waller,pilih;
    float saldo=10000,tf,su,tarik;

    do
    {
        puts("WELCOME AT BANK BARA");
        puts("====================");
        printf("1.CEK SALDO\n2.TRANSFER\n3.TARIK TUNAI\n4.STOR TUNAI\n5.EXIT\n");
        printf("PILIH 1-5 = ");
        scanf(" %c",&pilih);

        switch (pilih)
        {
        case '1' : printf("SALDO ANDA RP. %.2f\n", saldo);break;

        case '2' : printf("Ketikan Nominal Uang yg akan di transferkan = Rp.");
                   scanf("%f",&tf);
                   saldo=saldo-tf;break;

        case '3' : printf("Ketikan Nominal Uang yg akan diambil = Rp. ");
                   scanf("%f",&tarik);
                   saldo=saldo-tarik;break;

        case '4' : printf("Ketikan Nominal Uang yg akan di setor = Rp. ");
                   scanf("%f",&su);
                   saldo=saldo+su;break;

        case '5' : printf("TERIMA KASIH TELAH MENGGUNAKAN ATM BANK BARA\n");
                   break;

        default  : printf("PILIHAN TIDAK TERSEDIA\n");
                   break;
        }
    }
    while (pilih != '5');

    getch();
}
