#include <stdio.h>

int main(void)
{
    int word_count;
    int largest = 0;
    
    scanf("%d", &word_count);
    
    int words[word_count];
    
    for (int i = 0; i < word_count; i++)
    {
        char current_word[25] = {'\0'};
        scanf("%s", current_word);
        
        int word_length = 0;
        
        for (int j = 0; current_word[j] != '\0';  j++)
        {
            word_length++;
        }
        
        //printf("Current Word: %s, word_length: %d\n", current_word, word_length);

        words[i] = word_length;
    }
    
    for (int i = 0; i < word_count; i++)
    {
        //printf("Word Length: %d\n", words[i]);
        if (words[i] > largest)
        {
            largest = words[i];
        }
    }
    
    printf("%d", largest); 
    
    return 0;
}