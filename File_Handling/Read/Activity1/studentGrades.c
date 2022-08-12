#include <stdio.h>

int main()
{
	FILE *filePtr;
	int number_of_grades, individual_grade;
	double sum = 0, average = 0;

	filePtr = fopen("studentGrades.txt", "r");
	
	fscanf(filePtr, "%d", &number_of_grades);

	for (int i = 0; i < number_of_grades; i++)
	{
		fscanf(filePtr, "%d", &individual_grade);
		sum += individual_grade; 		
	}

	average = sum / number_of_grades;

	printf("%.2lf\n", average);

	return 0;
}
