#include <stdio.h>

struct Coordinates
{
    int x;
    int y;
};

void readCoordinates(struct Coordinates *point);

void printCoordinates(struct Coordinates point);

void printTriangle(struct Coordinates *triangleCoordinates);

void readTriangle(struct Coordinates *triangleCoordinates);

int main()
{
    struct Coordinates triangle1[3];

    readTriangle(triangle1);

    printTriangle(triangle1);

    return 0;
}

void readCoordinates(struct Coordinates *point)
{
    printf("Enter x-coordinate: ");
    scanf("%d", &point->x);
    printf("Enter y-coordinate: ");
    scanf("%d", &point->y);
}

void printCoordinates(struct Coordinates point)
{
    printf("(%d, %d)\n", point.x, point.y);
}

void printTriangle(struct Coordinates *triangleCoordinates)
{
    for (int i = 0; i < 3; i++)
    {
        printCoordinates(triangleCoordinates[i]);
    }
}

void readTriangle(struct Coordinates *triangleCoordinates)
{
    for (int i = 0; i < 3; i++)
    {
        readCoordinates(&triangleCoordinates[i]);
    }
}