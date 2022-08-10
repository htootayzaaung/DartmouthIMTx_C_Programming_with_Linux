#include <stdio.h>

int main()
{
    int input = 0, sum = 0;

    while (input != -1)
    {
        scanf("%d", &input);
        sum = sum + input;

        if (input == -1)
        {
            sum += 1;
            printf("%d", sum);
        }
    }
    return 0;
}