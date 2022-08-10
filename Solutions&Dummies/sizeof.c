#include <stdio.h>

int main()
{
    char c;
    int i;
    double d;
    char listchar[3];
    int listint[3];
    double listdouble[3];

    printf("%d\n", sizeof(c));

    printf("%d\n", sizeof(i));

    printf("%d\n", sizeof(d));

    printf("%d\n", sizeof(listchar));

    printf("%d\n", sizeof(listint));

    printf("%d\n", sizeof(listdouble));
    
    return 0;
}