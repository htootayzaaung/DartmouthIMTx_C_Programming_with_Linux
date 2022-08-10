#include <stdio.h>
#include <math.h>

int main()
{
    char datatype;
    int size, memorySize = 0;

    scanf("%c %d", &datatype, &size);

    switch (datatype)
    {
        case ('i'):
        {
            memorySize = sizeof(int) * size;
            break;
        }

        case ('s'):
        {
            memorySize = sizeof(short) * size;
            break;
        }

        case ('c'):
        {
            memorySize = sizeof(char) * size;
            break;
        }

        case ('d'):
        {
            memorySize = sizeof(double) * size;
            break;
        }
    }

    if (memorySize < 1000 && memorySize > 0)
    {
        printf("%d B\n", memorySize);
    }

    else if (memorySize > 1000 && memorySize < (int)pow(10, 6))
    {
       printf("%d KB and %d B\n", memorySize / 1000, memorySize - ((memorySize / 1000) * 1000));
    }

    else if (memorySize > (int)pow(10, 6) && memorySize < (int)pow(10, 9))
    {
        printf("%d MB and %d KB and %d B\n", memorySize / (int)pow(10, 6), 
        (memorySize - ((memorySize / (int)pow(10, 6)) * (int)pow(10, 6))) / 1000,
        memorySize - ((memorySize / 1000) * 1000));
    }

    return 0;
}