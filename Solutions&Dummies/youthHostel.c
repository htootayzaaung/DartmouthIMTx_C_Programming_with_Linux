#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hoursPast12, totalPrice;

    scanf("%d", &hoursPast12);

    if ((hoursPast12 < 0) || (hoursPast12 > 12))
    {
        exit(0);
    }

    totalPrice = 10 + (5 * hoursPast12);
    
    if (totalPrice > 53)
    {
        totalPrice = 53;
    }

    printf("%d", totalPrice);


    return 0;
}