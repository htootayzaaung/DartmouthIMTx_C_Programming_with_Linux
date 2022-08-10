#include <stdio.h>
#include <stdlib.h>

int *allocateIntArray(int num); 

double findAverage(int *arr, int num_of_elements);

int main()
{
    int num;

    double average;

    printf("How many grades would you like to enter? ");

    scanf("%d", &num);

    int *array = allocateIntArray(num);

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    average = findAverage(array, num);

    printf("Average: %f\n", average);

    return 0;
}

int *allocateIntArray(int num)          //Returns a (int * ) datatype
{
    int *ptr = (int *)malloc(num * sizeof(int));
    return ptr;
}

double findAverage(int *arr, int num_of_elements)
{
    double total = 0;
    double average = 0;

    for (int i = 0; i < num_of_elements; i++)
    {
        total = total + arr[i];
    }

    average = total / num_of_elements;
    return average;
}
