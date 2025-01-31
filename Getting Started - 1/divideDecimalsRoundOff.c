#include <stdio.h>

int main (void)
{
    int total_cement_bags_needded, estimated_cement_weight, total_cost = 0;

    scanf("%d", &estimated_cement_weight);

    total_cement_bags_needded = estimated_cement_weight / 120;

    if (total_cement_bags_needded % 120 != 0)
    {
        total_cement_bags_needded += 1;
    }

    printf("%d\n", total_cement_bags_needded * 45);
}