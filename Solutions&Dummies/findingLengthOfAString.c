#include <stdio.h>

int main()
{
    int length = 0;

    char word[25];

    printf("Enter string: ");
    scanf("%s", &word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == ' ')
        {
            length++;
        }

        length++;
    }

    printf("Length: %d\n", length);

    return 0;
}