#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

void readDate(struct date *userDate);

void printDate(struct date userDate);

int main()
{
    struct date today;

    readDate(&today);

    printDate(today);

    return 0;
}

void readDate(struct date *userDate)
{
    scanf("%d %d %d", &userDate->year, &userDate->day, &userDate->month);
}

void printDate(struct date userDate)
{
    printf("%02d/%02d/%d\n", userDate.day, userDate.month, userDate.year);
}