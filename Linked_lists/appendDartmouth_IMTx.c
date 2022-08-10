#include <stdio.h>

struct point
{
    int x;
    int y;
    struct point *next;
};

void printPoints(struct point *ptr);

void append(struct point *end, struct point *new_point);

int main()
{
    struct point pt1 = {1, 2, NULL};
    struct point pt2 = {-2, -3, NULL};
    struct point pt3 = {5, -4, NULL};
    struct point *start;

    start = &pt1;
    printPoints(start);

    append(&pt1, &pt2);
    printPoints(start);

    append(&pt2, &pt3);
    printPoints(start);

    return 0;
}

void printPoints(struct point *ptr)
{
    while (ptr != NULL)
    {
        printf("(%d, %d) ", ptr->x, ptr->y);
        ptr = ptr->next;
    }
    printf("\n");
}

void append(struct point *end, struct point *new_point)
{
    end->next = new_point;
}

