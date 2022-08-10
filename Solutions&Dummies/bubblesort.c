#include <stdio.h>

int main()
{
    int list[] = {759, 14, 2, 900, 106, 77, -10, 8, -3, 5};
    int noOfElements = 10;

    printf("Unsorted list: \n");

    for (int i = 0; i < noOfElements; i++)
    {
        printf("%d ", list[i]);
    }

    printf("\n");

    for (int x = 0; x < noOfElements; x++)
    {
        for (int i = 0; i < noOfElements; i++)
        {
            if (list[i] > list[i + 1])
            {
                int temp = 0;
                temp = list[i];
                list[i] = list[i + 1];
                list[i + 1] = temp;
            }
        }
    }

    printf("Sorted list: \n");

    for (int i = 0; i < noOfElements; i++)
    {
        printf("%d ", list[i]);
    }

    printf("\n");
    return 0;
}