#include <stdio.h>

int main()
{
    int numberOfElements;
    int target;

    printf("Enter the number of elements in the list: ");
    scanf("%d", &numberOfElements);

    int element[numberOfElements];

    for (int i = 0; i < numberOfElements; i++)
    {
        printf("Append element[%d]: ", i);
        scanf("%d", &element[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    for (int i = 0; i < numberOfElements; i++)
    {
        if (target == element[i])
        {
            printf("Found!\n");
        }
    }
    return 0;
}