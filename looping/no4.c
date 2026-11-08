
#include <stdio.h>
main()
{
    int a, b, hasil = 0, i;
    do
    {
        printf("Masukkan bilangan pertama : ");
        scanf("%d", &a);

        if (a <= 0)
        {
            printf("Bilangan harus positif!\n");
        }
    } while (a <= 0);

    do
    {
        printf("Masukkan bilangan kedua : ");
        scanf("%d", &b);

        if (b <= 0)
        {
            printf("Bilangan harus positif!\n");
        }
    } while (b <= 0);

    for (i = 1; i <= b; i++)
    {
        hasil = hasil + a;
    }

    printf("\nHasil %d x %d = %d", a, b, hasil);

    getch();
    return 0;
}
