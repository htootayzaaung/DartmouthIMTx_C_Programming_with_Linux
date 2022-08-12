#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *filePtr;
    double num, averageGrade;
    int counter = 0;

    filePtr = fopen(argv[1], "r");

    while (fscanf(filePtr, "%lf", &num) != EOF)
    {
		if (counter == 0)
		{
			averageGrade = num;
			counter++;
		}

		else if (counter > 0)
		{
			if (num > averageGrade)
			{
				fclose(filePtr);
				printf("No %d\n", counter);
				exit(0);
			}
		}
        counter++;
    }

    fclose(filePtr);
	printf("Yes\n");

    return 0;
}