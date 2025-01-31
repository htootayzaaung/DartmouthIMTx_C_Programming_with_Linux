#include <stdio.h>

int main(void)
{
    char word[50] = {'0'};
    int counter = 0;
    
    scanf("%s", word);
    
    for (int i = 0; word[i] != '\0'; i++)
    {
        counter++;
    }

    double midposition = counter / 2;
    
    for (int i = 0; i < counter; i++)
    {
        if (word[i] == 't' || word[i] == 'T')
        {
            if (i <= midposition)
            {
                printf("%d", 1);
                break;
            }
            else if (i > midposition)
            {
                printf("%d", 2);
                break;
            }
        }
        else if (i == counter -1)
        {
            printf("-%d", 1);
            break;
        }
    }
    return 0;
}