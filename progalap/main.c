#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Adj meg egy szamot: ");
    int a = 0;
    scanf("%d",&a);
    if(a<0){
        a=a*(-1);
        printf("A szam abszolut erteke: %d", a);
    }
    else{
        printf("A szam abszolut erteke: %d", a);
    }
    return 0;
}
