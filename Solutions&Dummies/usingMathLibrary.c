#include <stdio.h>
#include <math.h>

int main()
{
    int userInput;
    scanf("%d", &userInput);

    printf("%.8lf\n", sqrt(userInput));
    printf("%.10lf\n", exp(1));
    printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra program.c -o program -lm\n");

    return 0;
}