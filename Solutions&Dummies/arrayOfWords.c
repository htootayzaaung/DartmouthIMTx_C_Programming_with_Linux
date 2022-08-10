#include <stdio.h>

int main()
{
    char words[3][10];

    printf("Please enter threee words: ");

    for (int i = 0; i < 3; i++)
    {
        scanf("%s", words[i]);
    }

    printf("You have entered: \n");

    for (int i = 0; i < 3; i++)
    {
        printf("%s ", words[i]);
    }

    return 0;
}