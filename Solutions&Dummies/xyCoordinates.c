#include <stdio.h>

struct Coordinates
{
    int x;
    int y;
};

void readCoordinates(struct Coordinates *point);

void printCoordinates(struct Coordinates point);

void printCoordinatesArrowPointer(struct Coordinates *point);

int main()
{
    struct Coordinates z;
    readCoordinates(&z);
    printCoordinates(z);
    printCoordinatesArrowPointer(&z);

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

void printCoordinatesArrowPointer(struct Coordinates *point)
{
    printf("(%d, %d)\n", point->x, point->y);
}
