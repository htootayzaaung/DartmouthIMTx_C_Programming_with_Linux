#include <stdio.h>

int main(void)
{
    int num_names;

    scanf("%d", &num_names);

    for (int i = 0; i < num_names; i++)
    {
        char first_name[101], last_name[101];

        scanf("%s %s", first_name, last_name);

        printf("%s %s\n", last_name, first_name);
    }
}