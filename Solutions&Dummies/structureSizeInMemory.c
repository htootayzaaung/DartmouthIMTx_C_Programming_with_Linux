#include <stdio.h>

struct student
{
    char firstName[30];
    char lastName[30];
    int birthdate;
    double GPA;
};

void printStructureSize(struct student student_var);

int main()
{
    struct student Htoo_Aung = {"Htoo", "Aung", 2001, 3.75};

    struct student Khant_Htet = {"Khant", "Htet", 2002, 0.32};

    struct student Nyan_Myat = {"Nyan", "Myat", 2000, 1.35};

    printStructureSize(Htoo_Aung);

    printStructureSize(Khant_Htet);

    printStructureSize(Nyan_Myat);

    return 0;
}

void printStructureSize(struct student student_var)
{
    printf("Size of struct student %s_%s it %zu.\n", student_var.firstName, student_var.lastName, sizeof(student_var));
}