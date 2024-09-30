#include <stdio.h>

int main(void)
{
    int mini_temp, maxi_temp, current_temp;
    
    scanf("%d %d\n", &mini_temp, &maxi_temp);
    scanf("%d ", &current_temp);
    
    while(current_temp != -999)
    {
        if((current_temp >= mini_temp) && (current_temp <= maxi_temp))
        {
            //printf("Current Temperature: %d", current_temp);
            printf("Nothing to report\n");
        }
        
        else
        {
            //printf("Current Temperature: %d", current_temp);
            printf("Alert!\n");
            break;
        }
        
        scanf("%d ", &current_temp);
    }
    
    return 0;
}