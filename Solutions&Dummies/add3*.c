#include <stdio.h>

void addThree(int *num);

int main()
{
    int a = 5;

    addThree(&a);

    printf("%d\n", a);

    return 0;
}

void addThree(int *num)
{
    *num = *num + 3;
}