#include <stdio.h>

int main(void)
{
    char num[51] = {'\0'};
    scanf("%s", num);
    int digits = 0;

    for (int i = 0; num[i] != '\0'; i++)
    {
        digits++;
    }

    printf("Digits: %d\n", digits);

    return 0;
}

