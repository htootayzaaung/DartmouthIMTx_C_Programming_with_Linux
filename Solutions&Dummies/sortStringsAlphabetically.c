#include <stdio.h>

int main()
{
    char word1[50];
    char word2[50];

    int i = 0;

    printf("Please enter a word: \n");
    scanf("%s", &word1);

    printf("Another word: \n");
    scanf("%s", &word2);

    while (word1[i] != '\0' && word2[i] != '\0' && word1[i] == word2[i])
    {
        i++;
    }


}