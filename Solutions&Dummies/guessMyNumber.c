#include <stdio.h>

int main()
{
    int target, guess, attempts = 1;

    scanf("%d\n%d", &target, &guess);

    while (guess != target)
    {
        if (target > guess)
        {
            printf("it is more\n");
        }

        else if (target < guess)
        {
            printf("it is less\n");
        }

        scanf("%d ", &guess);

        attempts++;
    }

    if (guess == target)
    {
        printf("Number of tries needed:\n%d", attempts);
    }

    return 0;
}