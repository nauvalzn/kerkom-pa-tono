#include <stdio.h>
main()
{
    int i;

    for(i = 20; i <= 100; i += 2)
    {
        if(i % 5 == 0)
        {
            printf("%d ", i);
        }
    }
}
