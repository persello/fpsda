#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "funzioni.h"

int main()
{

    // Test funzione a

    int xa = 6;

    if(42 != a(xa)) {
        printf("Test fallito: funzione a(int).\n");
        exit(EXIT_FAILURE);
    }


    // Test funzione b

    int xb = 4;
    int yb = 6;

    if(24 != b(xb, yb)) {
        printf("Test fallito: funzione b(int, int).\n");
        exit(EXIT_FAILURE);
    }


    // Test funzione c

    long xc = 8;

    if(40320 != c(xc)) {
        printf("Test fallito: funzione c(long).\n");
        exit(EXIT_FAILURE);
    }


    // Test funzione d

    int xd = 10;

    if(fabs(2.718282 - d(xd)) > 0.000001) {
        printf("Test fallito: funzione d(int).\n");
        exit(EXIT_FAILURE);
    }


    // Fine

    printf("Test completato con successo.\n");
}
