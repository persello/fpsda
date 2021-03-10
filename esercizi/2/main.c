#include <stdio.h>

#include "libswap/include/libswap.h"

int main()
{
    int a = 5;
    int b = 4;

    swap(&a, &b);

    printf("a = %d, b = %d.\n", a, b);

    if (a == 4 && b == 5) {
        printf("Test superato.");
    } else if (a == 5 && b == 4) {
        printf("Test fallito.");
    } else if (a == b) {
        printf("Interessante...");
    } else {
        printf("Cambia mestiere.");
    }
}