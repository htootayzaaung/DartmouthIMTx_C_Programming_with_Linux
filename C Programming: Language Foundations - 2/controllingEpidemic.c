#include <stdio.h>

int main(void)
{
    int total_population;
    int day_number = 1;
    int number_infected = 1;
    
    scanf("%d", &total_population);
    
    while (number_infected < total_population)
    {
        number_infected += (2 * number_infected);
        day_number += 1;
    }
    
    printf("%d", day_number);

    return 0;
}