#include <stdio.h>

int main()
{
    int array[] = {6, 2, -4, 8, 5, 1};

    int *ptr = &array;

    *ptr = 2;
    *(ptr + 1) = 4;
    *(ptr + 2) = 6;
    *(ptr + 3) = 8;
    *(ptr + 4) = 10;
    *(ptr + 5) = 12;

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", array[i]);
        printf("%d\n", *(ptr + i));
    }

    return 0;
}