#include <stdio.h>

int main()
{
    int numberOfIngredients;
    double totalPrice = 0;

    scanf("%d", &numberOfIngredients);

    printf("\n");

    double pricePerPound[numberOfIngredients], weight[numberOfIngredients];

    for (int i = 0; i < numberOfIngredients; i++)
    {
        scanf("%lf ", &pricePerPound[i]);
    }

    printf("\n");

    for (int i = 0; i < numberOfIngredients; i++)
    {
        scanf("%lf ", &weight[i]);
    }

    printf("\n");

    for (int i = 0; i < numberOfIngredients; i++)
    {
        totalPrice = totalPrice + (pricePerPound[i] * weight[i]);
    }

    printf("%.6lf", totalPrice);

    return 0;
}
