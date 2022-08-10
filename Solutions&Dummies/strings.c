#include <stdio.h>

int main()
{
    char word[4];

    printf("Please enter a word with 3 letters: ");
    scanf("%s", word);
    printf("The word read is: %s.\n", word);
    printf("percentage-s-format-specifier : %s\npercentage-c-format-specifier : %c\n", word, word);

    return 0;
}