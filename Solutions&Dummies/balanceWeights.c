#include <stdio.h>

int main()
{
    int numberOfBoxcars;
    double sum = 0, average = 0;

    scanf("%d\n", &numberOfBoxcars);

    double boxcars[numberOfBoxcars];

    for (int i = 0; i < numberOfBoxcars; i++)
    {
        scanf("%lf", &boxcars[i]);
        sum = sum + boxcars[i];
    }

    average = sum / numberOfBoxcars;

    for (int i = 0; i < numberOfBoxcars; i++)
    {
        boxcars[i] = average - boxcars[i];
        printf("%.1lf\n", boxcars[i]);
    }

    return 0;
}