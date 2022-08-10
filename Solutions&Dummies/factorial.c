#include <stdio.h>

int factorial(int a);

int main()
{
    int num = 0;
    printf("Enter a num: ");
    scanf("%d", &num);

    printf("%d! = %d", num, factorial(num));

    return 0;
}

int factorial(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
}