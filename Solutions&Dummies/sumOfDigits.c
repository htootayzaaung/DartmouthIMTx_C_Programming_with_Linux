#include <stdio.h>

int sumOfDigits(char arr[]);

int main()
{
    char inputInteger[10];

    scanf("%s", &inputInteger);

    printf("%d\n", sumOfDigits(inputInteger));

    return 0;
}

int sumOfDigits(char arr[])
{
    int sum = 0;

    for (int i = 0; arr[i] != '\0'; i++)
    {
        arr[i] = arr[i] - 48;
        sum = sum + arr[i];
    }

    return sum;   
}