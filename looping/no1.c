
#include <stdio.h>

main() {
    int i, j, prima;

    for (i = 2; i <= 100; i++) {
        prima = 1;

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                prima = 0;
                break;
            }
        }

        if (prima == 1) {
            printf("%d ", i);
        }
    }
}
