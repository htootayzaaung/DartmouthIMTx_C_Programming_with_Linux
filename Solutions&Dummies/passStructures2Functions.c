#include <stdio.h>

struct student
{
    char firstName[30];
    char lastName[30];
    int birthdate;
    double GPA;
};

void printStudentDetails(struct student student_entity);

int main()
{
    struct student Htoo_Aung = {"Htoo", "Aung", 2001, 3.75};

    struct student Khant_Htet = {"Khant", "Htet", 2002, 0.32};

    struct student Nyan_Myat = {"Nyan", "Myat", 2000, 1.35};

    printStudentDetails(Htoo_Aung);

    printStudentDetails(Khant_Htet);

    printStudentDetails(Nyan_Myat);
    
    return 0;
}

void printStudentDetails(struct student student_entity)
{
    printf("Name: %s %s\nBirthdate: %d\nGPA: %.2lf\n\n", student_entity.firstName, student_entity.lastName, student_entity.birthdate, student_entity.GPA);
}