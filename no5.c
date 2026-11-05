#include <stdio.h>

main()
{
    int angka;
    printf("Masukan Angka : "); scanf("%d", &angka);
    
    if (angka > 0)
    {
        printf("%d Adalah Angka Positif", angka);
    }
    else if (angka < 0)
    {
        printf("%d Adalah Angka Negatif", angka);
    }
    else
    {
        printf("%d Adalah Angka NOL", angka);
    }
}