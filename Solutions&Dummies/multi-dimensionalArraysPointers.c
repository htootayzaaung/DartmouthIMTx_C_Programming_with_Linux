#include <stdio.h>

int main()
{
    short a[3] = {234,655, 843};
    short b[2] = {12, 62};
    short c[4] = {3456, 3467, 23, 276};
    short *arrays[3] = {a, b, c};

    printf("All the elements of list a: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arrays[0][i]);
    }

    printf("\n\n");

    printf("All the elements of list b: \n");
    for (int i = 0; i < 2; i++)
    {
        printf("%d ", arrays[1][i]);
    }

    printf("\n\n");

    printf("All the elements of list c: \n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arrays[2][i]);
    }

    printf("\n\n");

    return 0;
}