#include <stdio.h>

struct student
{
    char firstName[30];
    char lastName[30];
    int birthdate;
    double GPA;
};

void readStudentDetails(struct student *studentPtr);

void printStudentDetails(struct student student_entity);

int main()
{
    struct student Htoo_Aung;
    struct student Khant_Htet;
    struct student Nyan_Myat;

    readStudentDetails(&Htoo_Aung);
    readStudentDetails(&Khant_Htet);
    readStudentDetails(&Nyan_Myat);

    printStudentDetails(Htoo_Aung);
    printStudentDetails(Khant_Htet);
    printStudentDetails(Nyan_Myat);
    
    return 0;
}

void readStudentDetailsAddress(struct student *studentPtr)
{
    printf("Enter firstName: ");
    scanf("%s", studentPtr->firstName);
    printf("Enter lastName: ");
    scanf("%s", studentPtr->lastName);
    printf("Enter birthdate: ");
    scanf("%d", &studentPtr->birthdate);
    printf("Enter GPA: ");
    scanf("%lf", &studentPtr->GPA);
}

void printStudentDetails(struct student student_entity)
{
    printf("\nName: %s %s\nBirthdate: %d\nGPA: %.2lf\n\n", student_entity.firstName, student_entity.lastName, student_entity.birthdate, student_entity.GPA);
}