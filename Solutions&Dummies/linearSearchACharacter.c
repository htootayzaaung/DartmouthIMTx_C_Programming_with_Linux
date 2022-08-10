#include <stdio.h>
#include <stdlib.h>

int main()
{
    char emptyString[30];
    int letterCount = 0;
    int midwayIndex = 0;
    float midwayOdd = 0;

    //Initialising all the elements in the character array to '\0'
    for (int i = 0; i < 30; i++)
    {
        emptyString[i] = '\0';
    }

    scanf("%s", &emptyString);
    //printf("String: %s\n", emptyString);

    for (int i = 0; emptyString[i] != '\0'; i++)
    {
        letterCount++;
    }

    //printf("letterCount: %d\n", letterCount);

    if (letterCount % 2 == 0)
    {
        midwayIndex = letterCount / 2;
    }

    else if (letterCount % 2 != 0)
    {
        midwayOdd = (letterCount / 2) + 1;
        midwayIndex = (int)midwayOdd; 
    }

    //printf("midwayIndex: %d\n", midwayIndex);

    for (int i = 0; i < letterCount; i++)
    {
        if ((emptyString[i] == 'T' || emptyString[i] == 't') && i <= midwayIndex)
        {
            printf("%d\n", 1);
            exit(0);
        }
        else if ((emptyString[i] == 'T' || emptyString[i] == 't') && i > midwayIndex)
        {
            printf("%d\n", 2);
            exit(0);
        }
        else if ((emptyString[i] != 'T' || emptyString[i] != 't') && i == letterCount - 1)
        {
            printf("%d\n", -1);
            exit(0);
        }
    }
    
    return 0;
}