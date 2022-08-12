#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *filePtr;
    int num, counter = 0;

    filePtr = fopen(argv[1], "r");

    while (fscanf(filePtr, "%d", &num) != EOF)
    {
        counter++;
    }

    fclose(filePtr);

    printf("%d", counter);

    return 0;
}