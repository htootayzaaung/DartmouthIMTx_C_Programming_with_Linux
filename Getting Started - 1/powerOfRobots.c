#include <stdio.h>
int main()
{
    int num_of_robots = 0;
    int enginePower, resistance, weight, height = 0;
    int total_power = 0;

    scanf("%d", &num_of_robots);

    for (int i = 0; i < num_of_robots; i++)
    {
        scanf("%d %d %d %d", &height, &weight, &enginePower, &resistance);
        total_power = total_power + (enginePower + resistance) * (weight - height);
    }
    printf("%d\n", total_power);
    return 0;
}