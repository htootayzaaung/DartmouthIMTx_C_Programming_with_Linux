#include <stdio.h>

int main()
{
    int matrix[2][3];

    for (int line = 0; line < 2; line++)
    {
        for (int col = 0; col < 3; col++)
        {
            scanf("%d", &matrix[line][col]);
        }
    }

    for (int line = 0; line < 2; line++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("%d ", matrix[line][col]);
        }
        printf(" ");
    }

    return 0;
}