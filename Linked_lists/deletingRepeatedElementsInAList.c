#include <stdio.h>

int main()
{
    int arrSize;
    int no_duplicate_count = 0;
    int all_elements;

    printf("Enter array-size: ");
    scanf("%d", &arrSize);

    int arr[arrSize];
    all_elements = arrSize;

    for (int i = 0; i < arrSize; i++)
    {
        printf("Enter num%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int noDuplicates[arrSize];

    for (int i = 0; i < arrSize; i++)
    {
        noDuplicates[i] = -1;
    }

    for (int i = 0; i < arrSize; i++)
    {
        for (int j = i + 1; j < arrSize; j++)
        { 
            if (arr[i] == arr[j])
            {
                for (int k = j; k < arrSize - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                arrSize -= 1;
                j -= 1;
            }
        }
    }

    for (int i = 0; i < arrSize; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n%d\n", all_elements - arrSize);

    









    return 0;
}