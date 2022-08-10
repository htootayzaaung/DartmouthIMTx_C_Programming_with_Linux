#include <stdio.h>
#include <string.h>

int main()
{
    char arrayOfStrings[2][14];

    strcpy(arrayOfStrings[0], "blah");
    strcpy(arrayOfStrings[1], "hmm");

    printf("%s\n", arrayOfStrings[0]);
    printf("%s\n", arrayOfStrings[1]);




    return 0;
}