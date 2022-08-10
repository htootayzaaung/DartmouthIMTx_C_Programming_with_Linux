#include <stdio.h>

int main()
{
    int passengers;
    double totalGasCost, sharedCost;

    scanf("%d %lf", &passengers, &totalGasCost);

    if (passengers == 0)
    {
        printf("%.2lf", totalGasCost);
    }

    if (passengers >= 1)
    {
        sharedCost = (1 + totalGasCost) / ((double)passengers + 1);
        printf("%.2lf", sharedCost);
    }

    return 0;
}