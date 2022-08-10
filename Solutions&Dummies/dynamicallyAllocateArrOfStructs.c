#include <stdio.h>
#include <stdlib.h>

struct point
{
    int x;
    int y;
};

void readPoint(struct point *Coordinates);

void printPoint(struct point Coordinates);

void printTriangle(struct point *Coordinates);

void printPolygon(struct point *Coordinates, int vrtxs);

int main()
{
    struct point *polygon;

    int vertices;

    printf("Numebr of vertices of the polygon: ");

    scanf("%d", &vertices);

    polygon = (struct point *)malloc(vertices * sizeof(struct point));

    for (int i = 0; i < vertices; i++)
    {
        readPoint(&polygon[i]);
    }

    printPolygon(polygon, vertices);
    
    return 0;
}

void readPoint(struct point *Coordinates)
{
    printf("Enter x: ");
    scanf("%d", &Coordinates->x);
    printf("Enter y: ");
    scanf("%d", &Coordinates->y);
}

void printPoint(struct point Coordinates)
{
    printf("(%d, %d)\n", Coordinates.x, Coordinates.y);
}

void printTriangle(struct point *Coordinates)
{
    for (int i = 0; i < 3; i++)
    {
        printPoint(Coordinates[i]);
    }
}

void printPolygon(struct point *Coordinates, int vrtxs)
{
    for (int i = 0; i < vrtxs; i++)
    {
        printPoint(Coordinates[i]);
    }
}