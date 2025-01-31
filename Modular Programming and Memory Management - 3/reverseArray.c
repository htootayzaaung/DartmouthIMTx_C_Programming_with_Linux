#include <stdio.h>

void reverseArray(int *arr);

int main(void)
{
    int numArr[6];

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &numArr[i]);
    }

    reverseArray(numArr);
    
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", numArr[i]);
    }

    return 0;
}

void reverseArray(int *arr)
{
    for (int i = 0; i < 3; i++)
    {
        int temp = *(arr + i);
        *(arr + i) = *(arr + 5 - i);
        *(arr + 5 - i) = temp;
    }
}