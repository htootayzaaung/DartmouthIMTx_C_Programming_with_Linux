#include <stdio.h>

int main()
{
    int a = 42;
    double b = 58.394;
    char c = 'r';

    int *addressOfA = &a;
    double *addressOfB = &b;
    char *addressOfC = &c;

    printf("Address of A: %p\n", addressOfA);
    printf("Value of A: %d\n\n", *addressOfA);

    printf("Address of B: %p\n", addressOfB);
    printf("Value of B: %lf\n\n", *addressOfB);

    printf("Address of C: %p\n", addressOfC);
    printf("Value of C: %c\n", *addressOfC);

    return 0;
}