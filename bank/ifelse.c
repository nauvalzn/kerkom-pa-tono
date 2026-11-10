
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
    char pilih;
    float saldo = 10000, tf, su, tarik;

    do
    {
        puts("WELCOME AT BANK BARA");
        puts("====================");
        printf("1.CEK SALDO\n2.TRANSFER\n3.TARIK TUNAI\n4.STOR TUNAI\n5.EXIT\n");
        printf("PILIH 1-5 = ");
        scanf(" %c", &pilih);

        if (pilih == '1')
        {
            printf("SALDO ANDA RP. %.2f\n", saldo);
        }
        else if (pilih == '2')
        {
            printf("Ketikan Nominal Uang yg akan di transferkan = Rp.");
            scanf("%f", &tf);
            saldo = saldo - tf;
        }
        else if (pilih == '3')
        {
            printf("Ketikan Nominal Uang yg akan diambil = Rp. ");
            scanf("%f", &tarik);
            saldo = saldo - tarik;
        }
        else if (pilih == '4')
        {
            printf("Ketikan Nominal Uang yg akan di setor = Rp. ");
            scanf("%f", &su);
            saldo = saldo + su;
        }
        else if (pilih == '5')
        {
            printf("TERIMA KASIH\n");
        }
        else
        {
            printf("PILIHAN TIDAK TERSEDIA\n");
        }

    } while (pilih != '5');

    getch();
}
