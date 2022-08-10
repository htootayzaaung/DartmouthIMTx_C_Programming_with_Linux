#include <stdio.h>

int main()
{
    short a[3] = {234, 655, 843};
    short b[2] = {12, 62};
    short c[4] = {3456, 3467, 23, 276};
    short *arrays[3] = {a, b, c};

    /*
    Printing all the elements in the array "a", in two different ways:
    */

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", *(a + i));
        printf("%d\n", *(arrays[0] + i));
    }

    /*
    Pointer arithmetic:
    Assigning the values in the array "a":
    */

    *arrays[0] = 5;
    *(arrays[0] + 1) = 6;
    *(arrays[0] + 2) = 7;

    printf("\n\n");

    /*
    Printing all the elements in the updated version of the array "a", in two different ways:
    */
   
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", *(a + i));
        printf("%d\n", *(arrays[0] + i));
    }

    /*
    Printing all the elements in the array "b", in two different ways:
    */

   printf("\n\n");

    for (int i = 0; i < 2; i++)
    {
        printf("%d\n", *(b + i));
        printf("%d\n", *(arrays[1] + i));
    }

    /*
    Pointer arithmetic:
    Assigning the values in the array "b":
    */

    *arrays[1] = 3;
    *(arrays[1] + 1) = 4;

    printf("\n\n");

    /*
    Printing all the elements in the updated version of the array "a", in two different ways:
    */

    for (int i = 0; i < 2; i++)
    {
        printf("%d\n", *(b + i));
        printf("%d\n", *(arrays[1] + i));
    }

    return 0;
}