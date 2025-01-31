#include <stdio.h>

int main(void)
{
    int num_passengers;
    double gas_cost;
    
    scanf("%d %lf", &num_passengers, &gas_cost);
    
    if (num_passengers != 0 && num_passengers >= 1)
    {
        gas_cost = ((gas_cost) + 1) / (num_passengers + 1);
    }
    
    printf("%.2lf", gas_cost); 
    
    return 0;
}