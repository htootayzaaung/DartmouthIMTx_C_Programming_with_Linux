#include <stdio.h>

void reverseArray(int arr[]);

int main()
{
    int intList[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &intList[i]);
    }

    reverseArray(intList);

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", intList[i]);
    }

    return 0;
}

void reverseArray(int arr[])
{
    int temp = arr[0];
    arr[0] = arr[5];
    arr[5] = temp;

    temp = arr[1];
    arr[1] = arr[4];
    arr[4] = temp;

    temp = arr[2];
    arr[2] = arr[3];
    arr[3] = temp;
}