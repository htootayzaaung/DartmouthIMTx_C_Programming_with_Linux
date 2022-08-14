#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *filePtr;
	int loops;

	filePtr = fopen(argv[1], "a");

	printf("How many numbers do you want to enter? _");
	scanf("%d", &loops);

	int num[loops];

	for (int i = 0; i < loops; i++)
	{
		printf("Enter num: ");
		scanf("%d", &num[i]);
		fprintf(filePtr, "Num%d: %d\n", i + 1, num[i]);		
	} 		
	
	fclose(filePtr);

	return 0;
}

