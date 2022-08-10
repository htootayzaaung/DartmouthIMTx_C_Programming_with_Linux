#include <stdio.h>

int main()
{
    int totalPopulation, infected = 1, day = 1;

    scanf("%d", &totalPopulation);

    while (infected < totalPopulation)
    {
        infected = infected +  (infected * 2);
        day++;
    }

    if (day % 2 == 0)
    {
        printf("%d\n", day);
    }
    else if (day % 2 == 1)
    {
        printf("%d\n", (day - 1));
    }

    return 0;
}