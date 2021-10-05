#include <stdio.h>
#include <stdlib.h>

int main()
{
    int szam, i=2, db=0;
    printf("Kérek egy számot: "); scanf("%d", &szam);
    for (i=2; i<=szam/2; i++)
        if (szam%i==0) db += 1; //db=db+1;
            if (db) printf("A megadott szám nem prím.");
            else printf("A megadott szám prím.");
    return 0;
}
