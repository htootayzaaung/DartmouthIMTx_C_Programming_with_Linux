#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    int list[] = {-10, -3, 2, 5, 8, 14, 77, 106, 759, 900};
    int noOfElements = 10;
    bool found = false;

    int target, smallest, largest, middle;

    printf("Which number are you looking for? ");
    scanf("%d", &target);

    smallest = 0;
    largest = noOfElements - 1;
    
    for (int i = 0; (i < noOfElements) && (found == false); i++)
    {
        middle = noOfElements / 2;

        if (target >= middle)
        {
            if (list[i] == target)
            {
                found = true;
                printf("Found at index: %d\n", i);
                exit(0);
            }
        }

        if (target <= middle)
        {
            if (list[i] == target)
            {
                found = true;
                printf("Found at index: %d\n", i);
                exit(0);
            }
        }

        if (list[i] == target)
        {
            found = true;
            printf("Found at index: %d\n", i);
            exit(0);
        }

        if ((i == noOfElements - 1) && (found == false))
        {
            printf("Not Found!\n");
        }
    }

    return 0;
}

