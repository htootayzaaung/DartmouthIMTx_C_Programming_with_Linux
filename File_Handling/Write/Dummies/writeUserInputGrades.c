#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *filePtr;
	int loops;

	filePtr = fopen(argv[1], "w");

	printf("How many numbers do you want to enter? _");
	scanf("%d", &loops);

	int num[loops];

	for (int i = 0; i < loops; i++)
	{
		printf("Enter num: ");
		scanf("%d", &num[i]);
		fprintf(filePtr, "Num%d: %d\n", i + 1, num[i]);		
	} 		
	
	fprintf(filePtr, "__________________________________________________________\n_If the file did not exist previously, it will be created. \n_If the file already exist, it will be overwritten.\n__________________________________________________________\n");

	fclose(filePtr);

	return 0;
}
