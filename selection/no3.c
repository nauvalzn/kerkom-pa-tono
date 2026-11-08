#include <stdio.h>

main()
{
    int tb;
    printf("Masukan Tinggi Badan : ");  scanf("%d", &tb);

    if (tb >= 0 && tb <= 100)
    { 
        printf("Tinggi saudara adalah Pendek");
    }
    else if (tb >= 101 && tb <= 150)
    {
        printf("Tinggi saudara adalah Sedang");
    }
    else
    {
        printf("Tinggi saudara adalah Tinggi");
    }
}