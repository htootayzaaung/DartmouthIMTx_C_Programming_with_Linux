#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *filePtr;
	int N, number;
	
	filePtr = fopen(argv[1], "r");

	fscanf(filePtr, "%d", &N);
	
	printf("%d\n", N);
	
	for (int i = 0; i < N; i++)
	{
		fscanf(filePtr, "%d", &number);

		printf("%d ", number);
	}
	fclose(filePtr);

	return 0;
}

//run the executable
//enter: ./executableName txtfile.txt on terminal 
