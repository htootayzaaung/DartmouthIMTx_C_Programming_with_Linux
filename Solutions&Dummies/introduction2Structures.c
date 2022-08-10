#include <stdio.h>

struct student
{
    char firstName[30];
    char lastName[30];
    int birthdate;
    double GPA;
};

int main()
{
    struct student Htoo_Aung = {"Htoo", "Aung", 2001, 3.75};

    struct student Khant_Htet = {"Khant", "Htet", 2002, 0.32};

    struct student Nyan_Myat = {"Nyan", "Myat", 2000, 1.35};

    printf("Name: %s %s\nBirthdate: %d\nGPA: %.2lf\n\n", Htoo_Aung.firstName, Htoo_Aung.lastName, Htoo_Aung.birthdate, Htoo_Aung.GPA);

    printf("Name: %s %s\nBirthdate: %d\nGPA: %.2lf\n\n", Khant_Htet.firstName, Khant_Htet.lastName, Khant_Htet.birthdate, Khant_Htet.GPA);

    printf("Name: %s %s\nBirthdate: %d\nGPA: %.2lf\n\n", Nyan_Myat.firstName, Nyan_Myat.lastName, Nyan_Myat.birthdate, Nyan_Myat.GPA);

    return 0;
}