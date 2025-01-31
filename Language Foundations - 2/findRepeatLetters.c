#include <stdio.h>

int main (void)
{
    char word[51] = {'\0'};
    scanf("%s", word);
    int word_count = 0;
    int counter = 0;

    for (int i = 0; word[i] != '\0'; i++)
    {
        word_count++;
    }

    for (int j =0; j < word_count; j++)
    {
        for (int i = 0; i < word_count - 1; i++)
        {
            if (word[i] > word[i + 1])
            {
                int temp = word[i];
                word[i] = word[i + 1];
                word[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < word_count - 1; i++)
    {
        char current_char = word[i];
        
        if (current_char == word[i + 1])
        {
            if (current_char != word[i + 2])
            {
                counter++;
            }
            // printf("Current-char: %c, Counter: %d\n", current_char, counter);
        }
    }

    // printf("Word_count: %d\n", word_count);
    // printf("New word: %s\n", word);
    printf("%d", counter);

    return 0;
}
