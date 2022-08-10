#include <stdio.h>

struct Coordinates
{
    int x;
    int y;
};

void readCoordinates(struct Coordinates *point);

void printCoordinates(struct Coordinates point);


int main()
{
    struct Coordinates triangle1[3];

    for (int i = 0; i < 3; i++)
    {
        readCoordinates(&triangle1[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printCoordinates(triangle1[i]);
    }

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

