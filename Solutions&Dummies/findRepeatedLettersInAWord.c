#include <stdio.h>

int main()
{
    char inputWord[50];
    scanf("%s", &inputWord);

    int count = 0;
    int similarityCount = 0;

    for (int i = 0; inputWord[i] != '\0'; i++)
    {
        count++;
    }

    for (int j = 0; j < count; j++)
    {
        if (inputWord[j] == inputWord[j + 1])
        {
            similarityCount++;
        }
    }

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (inputWord[j] > inputWord[j + 1])
            {
                int temp = 0;
                temp = inputWord[j];
                inputWord[j] = inputWord[j + 1];
                inputWord[j + 1] = temp;
            }
        }
    }

    printf("%d\n", similarityCount);

    return 0;
}