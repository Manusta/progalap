#include <stdio.h>
#include <stdlib.h>

int main()
{
    if ( ((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0) )
        printf("Szökõév \n");
    else
        printf("Nem szökõév \n");
    do {
        ok = 1; // az alsó határ >= 1000 legyen
        printf("Add meg az intervallum alsó határát: ");
        if (scanf("%d", &lower)!=1 || lower<1000) {
            printf("Hibás input\n");
            ok = 0;
            while ((ch=getchar())!='\n') ; // input buffer ürítése
            }
        } while (!ok);
    do { // felsõhatár > alsóhatár és felsõhatár <= 2019
        ok = 1;
        printf("Add meg az intervallum felsõ határát: ");
        if (scanf("%d", &upper)!=1 || upper<lower || upper > 2019) {
            printf("Hibás input\n");
            ok = 0;
            while ((ch=getchar())!='\n') ; // input buffer ürítése
            }
        } while (!ok);
    return 0;
}
