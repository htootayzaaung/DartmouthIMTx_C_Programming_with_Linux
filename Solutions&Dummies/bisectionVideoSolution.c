#include <stdio.h>

int main()
{
    int list[] = {-10, -3, 2, 5, 8, 14, 77, 106, 759, 900};
    int noOfElements = 0;

    int target;
    int smallest = 0;
    int largest = noOfElements - 1;
    int found = 0;
    int midpoint;

    printf("Which number are you looking for? ");
    scanf("%d", &target);

    while ((found != 1) && (smallest <= largest))
    {
        midpoint = (smallest + largest) / 2;
        if (target == list[midpoint])
        {
            found == 1;
        }

        if (target < list[midpoint])
        {
            largest = midpoint - 1;
        }

        else
        {
            smallest = smallest + 1;
        }
    }

    if (found != 1)
    {
        printf("Number %d was not found in the array. \n", item);
    }
    else
    {
        printf("Number %d was found at index %d in the array. \n", item, mid);
    }





    return 0;
}