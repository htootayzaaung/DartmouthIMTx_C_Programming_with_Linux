#include <stdio.h>

void min(int arr[], int noOfElements);

int main()
{
    int numberOfElements = 0;
    scanf("%d", &numberOfElements);

    int list[numberOfElements];

    for (int i = 0; i < numberOfElements; i++)
    {
        scanf("%d", &list[i]);
    }

    min(list, numberOfElements);

    return 0;
}

void min(int arr[], int noOfElements)
{
    int smallest = 2147483647;

    for (int i = 0; i < noOfElements; i++)
    {
        if (arr[i] <= smallest)
        {
            smallest = arr[i];
        }
    }
    printf("%d\n", smallest);
}