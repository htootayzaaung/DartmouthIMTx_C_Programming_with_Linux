#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {

    // Fill in your main function here
    int num;
    scanf("%d", &num);

    // struct point polygon[num];
    struct point *polygon = malloc(sizeof(struct point) * num);
    initializePoly(polygon, num);
    printPoly(polygon, num);
    free(polygon);
}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

// Write your initializePoly() function here
void initializePoly(struct point *polygon, int num_sides)
{
    for (int i = 0; i < num_sides; i++)
    {
        polygon[i].x = -i;
        polygon[i].y = i * i;
    }
}
