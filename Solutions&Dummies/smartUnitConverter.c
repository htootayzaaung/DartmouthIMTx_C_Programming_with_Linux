#include <stdio.h>

int main()
{
    int numberOfConversions = 0;
    scanf("%d", &numberOfConversions);

    double convertedValues[numberOfConversions];
    double temp[numberOfConversions];
    char unit[1][numberOfConversions];

    for (int i = 0; i < numberOfConversions; i++)
    {
        scanf("%lf %c", &temp[i], &unit[1][i]);
    }

    for (int i = 0; i < numberOfConversions; i++)
    {
        if (unit[1][i] == 'm')
        {
            convertedValues[i] = temp[i] * 3.2808;
            printf("%.6lf %s\n", convertedValues[i], "ft");
        }

        if (unit[1][i] == 'g')
        {
            convertedValues[i] = temp[i] * 0.002205;
            printf("%.6lf %s\n", convertedValues[i], "lbs");
        }

        if (unit[1][i] == 'c')
        {
            convertedValues[i] = 32 + (1.8 * temp[i]);
            printf("%.6lf %s\n", convertedValues[i], "f");
        }
    }

    return 0;
}