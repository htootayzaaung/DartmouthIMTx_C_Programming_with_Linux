#include <stdio.h>

int main()
{
    int numberOfElments;
    scanf("%d\n", &numberOfElments);
    int smallest;

    int list[numberOfElments];

    for (int i = 0; i < numberOfElments; i++)
    {
        scanf("%d ", &list[i]);
    }

    printf("%d", smallest);

    return 0;
}