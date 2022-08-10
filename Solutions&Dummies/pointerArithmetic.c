#include <stdio.h>

int main()
{
    int arr[3] = {15, 16, 17};
    printf("%p\n", arr);

    for (int i = 0; i < 3; i++)
    {
        printf("arr[%d] = %d\n", i, *(arr + i));
    }

    return 0;
}