#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

int main()
{
    struct date today = {2018, 6, 30};

    struct date december1st = {2018, 12, 1};

    printf("Today's date is %04d/%02d/%0d.\n", today.year, today.month, today.day);

    printf("Today's date is %04d/%02d/%01d.\n", december1st.year, december1st.month, december1st.day);

    printf("Today's date is %04d/%02d/%02d.\n", december1st.year, december1st.month, december1st.day);

    printf("Today's date is %04d/%02d/%03d.\n", december1st.year, december1st.month, december1st.day);

    printf("Today's date is %04d/%02d/%04d.\n", december1st.year, december1st.month, december1st.day);

    return 0;
}