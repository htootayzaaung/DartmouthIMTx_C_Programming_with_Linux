#include <stdio.h>

#define arrSize 7

int main()
{
    int arr[arrSize] = {5, 2, 5, 6, 2, 0, 2};
    int noDuplicates[arrSize];

    for (int i = 0; i < arrSize; i++)
    {
        noDuplicates[i] = -1;
    }

    for (int i = 0; i < arrSize; i++)
    {
        for (int j = 0; j < arrSize; j++)
        {
            if (noDuplicates[i] != arr[j])
            {
                noDuplicates[i] = arr[j];
            }
        }
    }

    for (int i = 0; noDuplicates[i] != -1; i++)
    {
        printf("%d ", noDuplicates[i]);
    }

    return 0;
}