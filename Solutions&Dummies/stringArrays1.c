#include <stdio.h>

int main()
{
    char a[4];
    char b[5];
    char c[9];

    char *words[3] = {a, b, c};

    printf("Please enter a word with at most 3 letters: ");
    scanf("%s", a);
    printf("Please enter a word with at most 5 letters: ");
    scanf("%s", b);
    printf("Please enter a word with at most 9 letters: ");
    scanf("%s", c);

    printf("%s\n", words[0]);
    printf("%s\n", words[1]);
    printf("%s\n", words[2]);

    return 0;
}