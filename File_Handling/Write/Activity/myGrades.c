#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *filePtr;
    int num, userInput;

    filePtr = fopen(argv[1], "r");

    if (filePtr != NULL)
    {
        while (fscanf(filePtr, "%d", &num) != EOF)
        {
            //Do nothing!
        }
        fclose(filePtr);
    }

    scanf("%d", &userInput);

    filePtr = fopen(argv[1], "a");

    if (userInput != num)
    {
        fprintf(filePtr, " %d", userInput);
    }

    fclose(filePtr);
    
    return 0;
}

