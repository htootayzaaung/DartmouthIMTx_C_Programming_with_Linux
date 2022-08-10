#include <stdio.h>
#include <stdlib.h>

int main()
{
    int miniSafeTemp, maxiSafeTemp, currentTemp;

    scanf("%d %d\n%d", &miniSafeTemp, &maxiSafeTemp, &currentTemp);

    while (currentTemp != -999)
    {
        if ((currentTemp >= miniSafeTemp) && (currentTemp <= maxiSafeTemp))
        {
            printf("Nothing to report\n");
        }
        
        else if ((currentTemp <= miniSafeTemp) || (currentTemp >= maxiSafeTemp))
        {
            printf("Alert!\n");
            exit(0);
        }
       
        scanf(" %d", &currentTemp);
    }

    return 0;
}
