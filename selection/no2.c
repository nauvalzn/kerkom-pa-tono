#include <stdio.h>

main()
{
    int bilangan;
    printf("Masukan Bilangan Yang Ingin di Cek : "); scanf("%d", &bilangan);
    if (bilangan % 2 == 0)
    {
        printf("%d Adalah Bilangan Genap", bilangan);
    }
    else
    {
        printf("%d Adalah Bilangan Ganjil", bilangan);
    }
}