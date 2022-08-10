#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

void readDate(struct date *userDate);

void printDate(struct date userDate);

struct date advanceDay(struct date userDate);

int main()
{
    struct date today, tommorrow;

    readDate(&today);

    printDate(today);

    tommorrow = advanceDay(today);

    printDate(tommorrow);

    return 0;
}

void readDate(struct date *userDate)
{
    scanf("%d %d %d", &userDate->year, &userDate->month, &userDate->day);
}

void printDate(struct date userDate)
{
    printf("%02d/%02d/%d\n", userDate.month, userDate.day, userDate.year);
}

struct date advanceDay(struct date userDate)
{
    if (userDate.day == 30 && (userDate.month == 4 || userDate.month == 6 || userDate.month == 9 || userDate.month == 11))
    {
        userDate.day = 1;
        userDate.month += 1;
    }

    else if (userDate.day == 31 && (userDate.month == 1 || userDate.month == 3 || userDate.month == 5 || userDate.month == 7 || userDate.month == 8 || userDate.month == 10))
    {
        userDate.day = 1;
        userDate.month += 1;
    }

    else if (userDate.day == 31 && userDate.month == 12)
    {
        userDate.day = 1;
        userDate.month = 1;
        userDate.year += 1;
    }
    
    else
    {
        userDate.day += 1;
    }

    return userDate;
}