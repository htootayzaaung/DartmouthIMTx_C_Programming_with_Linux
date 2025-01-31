#include <stdio.h>

void print_characters(char c, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%c", c);
    }
}

int main ()
{
    char c;
    char plus = '+';
    scanf("%c", &c);
    int original_count_plus = 4;
    int original_count_c = 1;

    for (int i = 0; i < 5; i++)
    {
        print_characters(plus, original_count_plus);
        print_characters(c, original_count_c);
        print_characters(plus, original_count_plus);

        original_count_plus -= 1;
        original_count_c += 2;

        printf("\n");
    }
    return 0;
}