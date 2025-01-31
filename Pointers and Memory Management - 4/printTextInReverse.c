#include <stdio.h>

int main()
{
    char inputString[68][40];

    for (int i = 0; i < 68; i++)
    {
        scanf("%s", inputString[i]);
    }

    for (int i = 0; i < 68; i++)
    {
        printf("%s ", inputString[68 - (i + 1)]);
    }

    printf("\n");

    return 0;
}