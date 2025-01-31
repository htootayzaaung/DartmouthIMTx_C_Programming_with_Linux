#include <stdio.h>

int main(void)
{
    int num_cars;
    int total_weight = 0;
    
    scanf("%d", &num_cars);
    
    double box_cars[num_cars];
    
    for (int i = 0; i < num_cars; i++)
    {
        int temp;
        scanf("%d\n", &temp);
        box_cars[i] = temp;
        total_weight += temp;
    }
    
    double average =  (double) total_weight / num_cars;
    
    for (int i = 0; i < num_cars; i++)
    {
        printf("%.1lf\n", average - box_cars[i]);
    }
    
    return 0;
}