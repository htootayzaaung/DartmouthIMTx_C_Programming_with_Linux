#include <stdio.h>

int calculateBytes(char datatype, int value);

void printBytes(int bytes);

int main(void)
{
    char datatype;
    int value, total_bytes;

    scanf("%c %d", &datatype, &value);

    total_bytes = calculateBytes(datatype, value);

    printBytes(total_bytes);
    
    return 0;
}

int calculateBytes(char datatype, int value)
{
    if (datatype == 'i') {
        return sizeof(int) * value;
    } else if (datatype == 'c') {
        return sizeof(char) * value;
    } else if (datatype == 'd') {
        return sizeof(double) * value;
    } else {
        return 0;
    }
}

void printBytes(int bytes)
{
    int B, KB, MB;

    if (bytes >= 0 && bytes <= 1000)
    {
        B = bytes;
        printf("%d B\n", B);
    }
    else if (bytes > 1000 && bytes <= 1000000)
    {
        KB = bytes / 1000;
        B = bytes % 1000;
        printf("%d KB and %d B\n", KB, B);
    }
    else if (bytes > 1000000)
    {
        MB = bytes / 1000000;
        KB = (bytes % 1000000) / 1000;
        B = (bytes % 1000000) % 1000;
        printf("%d MB %d KB and %d B\n", MB, KB, B);
    }
}