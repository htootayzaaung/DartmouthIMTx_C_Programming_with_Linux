#include <stdio.h>

int main()
{
    FILE *filePtr;
    int num, userInput;

    filePtr = fopen("myGrades.txt", "r");

    if (filePtr != NULL)
    {
        while (fscanf(filePtr, "%d", &num) != EOF)
        {
            //Do nothing!
        }
        fclose(filePtr);
    }

    scanf("%d", &userInput);

    if (userInput != num)
    {
        filePtr = fopen("myGrades.txt", "a");
        fprintf(filePtr, " %d", userInput);
        fclose(filePtr);
    }
    
    filePtr = fopen("myGrades.txt", "r");

    while (fscanf(filePtr, "%d", &num) != EOF)
    {
        printf("%d ", num);
    }
    fclose(filePtr);

    return 0;
}
