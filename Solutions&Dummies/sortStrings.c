#include <stdio.h>
#include <string.h>

int main()
{
    int numberOfStrings;

    printf("Please enter the number of strings to be sorted: ");
    scanf("%d", &numberOfStrings);

    char strings[numberOfStrings][30];

    //Initialising all the arrays to '0' and printing the blank-lines:

    for (int i = 0; i < numberOfStrings; i++)
    {
        strcpy(strings[i], "\0");
        printf("%s\n", strings[i]);
    }

    printf("Unsorted strings: ");

    for (int i = 0; i < numberOfStrings; i++)
    {
        scanf("%s", &strings[i]);
        printf("%s\n", strings[i]);
    }

    printf("\nSorted once: \n");

    for (int i = 0; i < numberOfStrings; i++)
    {
        for (int x = 0; x < 30; x++)
        {
            if (strings[i][x] >= strings[i + 1][x])
            {
                char temp[30];
                strcpy(temp, strings[i]);
                strcpy(strings[i], strings[i + 1]);
                strcpy(strings[i + 1], temp);
                continue;
            }
            i++;
        }
        printf("%s\n", strings[i]);
    }
    return 0;
}