#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *filePtr;
    double num;
    int counter = 0;

    filePtr = fopen(argv[1], "r");

    while (fscanf(filePtr, "%lf", &num) != EOF)
    {
        printf("%.2lf\n", num);
        counter++;
    }

    fclose(filePtr);

    printf("%d", counter);

    return 0;
}