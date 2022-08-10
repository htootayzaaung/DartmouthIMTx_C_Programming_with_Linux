#include <stdio.h>

int main()
{
    int numberOfIterations;
    char word[50];

    scanf("%d %s", &numberOfIterations, &word);

    for (int i = 0; i < numberOfIterations; i++)
    {
        printf("%s\n", word);
    }

    return 0;
}