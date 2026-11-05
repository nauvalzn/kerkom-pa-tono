#include <stdio.h>

main()
{
    int A, B, C;
    printf("Masukan 3 bilangan : ");
    scanf("%d %d %d", &A, &B, &C);

    if (A >= B && A >= C)
    {
        printf("Bilangan Terbesar Adalah %d\n", A);
    }
    else if (B >= A && B >= C)
    {
        printf("Bilangan Terbesar Adalah %d\n", B);
    }
    else
    {
        printf("Bilangan Terbesar Adalah %d\n", C);
    }
}