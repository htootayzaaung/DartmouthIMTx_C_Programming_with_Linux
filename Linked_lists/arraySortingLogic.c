#include <stdio.h>
#include <stdlib.h>

int returnArrSize();

int *createArr(int array_size);

void printArr(int *array, int array_size);

int *sortArray(int *array, int array_size);

int main()
{
    int arrSize = returnArrSize();
    int *arr = createArr(arrSize);
    int *sortedArr;

    printArr(arr, arrSize);

    printf("Sorted Array:\n");

    sortedArr = sortArray(arr, arrSize);
    printArr(sortedArr, arrSize);

    return 0;
}

int returnArrSize()
{
    int size;
    printf("Enter the array-size: ");
    scanf("%d", &size);
    return size;
}

int *createArr(int array_size)
{
    int *array;
    array = (int *)malloc(sizeof(int) * array_size);

    for (int i = 0; i < array_size; i++)
    {
        printf("Enter num%d: ", i + 1);
        scanf("%d", &array[i]);
    }

    return array;
}

void printArr(int *array, int array_size)
{
    for (int i = 0; i < array_size; i++)
    {
        printf("Num%d: %d\n", i + 1, array[i]);
    }
}

int *sortArray(int *array, int array_size)
{
    for (int i = 0; i < array_size; i++)
    {
        for (int j = 0; j < array_size; j++)
        {
            if (array[i] < array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    return array;
}