#include <stdio.h>

int main()
{
    int wordsNum;
    char word[30];
    int length[10];


    scanf("%d\n", &wordsNum);

    int wordCount[wordsNum];

    for (int i = 0; i < wordsNum; i++)
    {
        int count = 0;
        scanf("%s", &word);
        for (int i = 0; word[i] != '\0'; i++)
        {
            count++;
            wordCount[i] = count;
        }
        printf("wordCount[%d] = %d\n", wordCount[i], count);
    }

    return 0;
}