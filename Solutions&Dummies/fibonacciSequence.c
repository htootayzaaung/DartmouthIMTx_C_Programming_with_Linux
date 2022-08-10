#include <stdio.h>

int main()
{
    int n;
    printf("Enter ther number n-number of terms of the fibonacci sequence to be generated: ");
    scanf("%d", &n);

    int fibonnaciSequence[n];

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            fibonnaciSequence[i] = 0;
        }

        else if (i == 1)
        {
            fibonnaciSequence[i] = 1;
        }

        else if (i > 1)
        {
            fibonnaciSequence[i] = fibonnaciSequence[i - 1] + fibonnaciSequence[i - 2];
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonnaciSequence[i]);
    }

    return 0;
}