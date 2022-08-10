#include <stdio.h>
#include <stdlib.h>

int main()
{
    int trackingCodeQty;
    scanf("%d", &trackingCodeQty);

    int length[trackingCodeQty];
    char datatype[trackingCodeQty];

    int totalbytes = 0;

    for (int i = 0; i < trackingCodeQty; i++)
    {
        scanf("%d %c", &length[i], &datatype[i]);
    }

    for (int i = 0; i < trackingCodeQty; i++)
    {
        if (datatype[i] == 'i')
        {
            totalbytes = totalbytes + (length[i] * 4);
        }

        else if (datatype[i] == 'd')
        {
            totalbytes = totalbytes + (length[i] * 8);
        }

        else if (datatype[i] == 'c')
        {
            totalbytes = totalbytes + (length[i] * 1);
        }

        else if (datatype[i] != 'i' && datatype[i] != 'd' && datatype[i] != 'c')
        {
            printf("Invalid tracking code type\n");
            exit(0);
        }
    }

    printf("%d bytes\n", totalbytes);

    return 0;
}