
#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, hasil = 0, sisa;

    clrscr();

    do
    {
        printf("Masukkan bilangan pertama : ");
        scanf("%d", &a);

        printf("Masukkan bilangan kedua : ");
        scanf("%d", &b);

        if(a <= 0 || b <= 0)
        {
            printf("Bilangan harus positif!\n\n");
        }
        else if(a % b != 0)
        {
            printf("Bilangan pertama harus habis dibagi bilangan kedua!\n\n");
        }

    } while(a <= 0 || b <= 0 || a % b != 0);

    sisa = a;

    while(sisa >= b)
    {
        sisa = sisa - b;
        hasil = hasil + 1;
    }

    printf("\nHasil pembagian %d / %d = %d", a, b, hasil);

    getch();
    return 0;
}
