#include <stdio.h>

int main()
{
    char letter1, letter2;

    printf("Please enter two letters seperated by a comma: ");
    scanf("%c, %c", &letter1, &letter2);
    printf("I read the letters %c and %c.\n", letter1, letter2);

    return 0;
}