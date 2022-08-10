#include <stdio.h>
#include <math.h>

struct point
{
    int x;
    int y;
    struct point *next;
};

void printNode(struct point *n);

void incrementNode(struct point *n);

void doubleNode(struct point *n);

void squareNode(struct point *n);

int main()
{                                           //ptr = start = &pt1
    struct point pt1 = {1, 1, NULL};        //pt1 = {1, 1, &pt2}
    struct point pt2 = {-2, 3, NULL};       //pt2 = {-2, 3, &pt3}
    struct point pt3 = {5, -4, NULL};       
    struct point *start, *ptr;

    start = &pt1;
    pt1.next = &pt2;
    pt2.next = &pt3;
    ptr = start;

    printNode(ptr);
    incrementNode(ptr);
    doubleNode(ptr);
    squareNode(ptr);

    return 0;
}

void printNode(struct point *n)
{
    printf("Printing a tuple-pair of elements in a linked-list: \n");
    while (n != NULL)
    {
        printf("(%d, %d) ", n->x, n->y);
        n = n->next;
    }
    printf("\n");
}

void incrementNode(struct point *n)
{
    printf("Incrementing a tuple-pair of elements in a linked-list: \n");
    while(n != NULL)
    {
        n->x += 1;
        n->y += 1;
        printf("(%d, %d) ", n->x, n->y);
        n = n->next;
    }
    printf("\n");
}

void doubleNode(struct point *n)
{
    printf("Doubling a tuple-pair of elements in a linked-list: \n");
    while(n != NULL)
    {
        n->x *= 2;
        n->y *= 2;
        printf("(%d, %d) ", n->x, n->y);
        n = n->next;
    }
    printf("\n");
}

void squareNode(struct point *n)
{
    printf("Squaring a tuple-pair of elements in a linked-list: \n");
    while(n != NULL)
    {
        n->x = pow(n->x, 2);
        n->y = pow(n->y, 2);
        printf("(%d, %d) ", n->x, n->y);
        n = n->next;
    }
    printf("\n");
}