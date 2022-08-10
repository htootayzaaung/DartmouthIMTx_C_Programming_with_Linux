#include <stdio.h>

int main()
{
    int howMany = 0;
    int sum = 0;
    int numberRead = 0;

    printf("How many items do you want to add? ");
    scanf("%d", &howMany);

    for (int i = 0; i < howMany; i++)
    {
        scanf("%d", &numberRead);
        printf("I have read %d from the input terminal\n", numberRead);
        sum = sum + numberRead;
    }

    printf("Sum equals to: %d\n", sum);

    return 0;
}