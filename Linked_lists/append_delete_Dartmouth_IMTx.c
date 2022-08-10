#include <stdio.h>
#include <stdlib.h>

struct point
{
    int x;
    int y;
    struct point *next;
};

void printPoints(struct point *ptr);

struct point* append(struct point *end, struct point *new_point);

struct point* createPoint(int x, int y);

int main()
{
   struct point *current_point, *start, *end;
   int num_of_points;
   int x, y;


   printf("Enter the number of points: ");
   scanf("%d", &num_of_points);

   for (int i = 0; i < num_of_points; i++)
   {
    printf("x: ");
    scanf("%d", &x);

    printf("y: ");
    scanf("%d", &y);

    current_point = createPoint(x, y);
    
    if (i == 0)
    {
        start = current_point;
        end = start;
    }
    else if (i > 0)
    {
        end = append(end, current_point);
    }
   }

   printPoints(start);
   free(start);

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

struct point* append(struct point *end, struct point *new_point)
{
    end->next = new_point;
    return (new_point);
}

struct point* createPoint(int x, int y)
{
    struct point *new_point;
    new_point = (struct point*)malloc(sizeof(struct point));
    new_point->x = x;
    new_point->y = y;
    new_point->next = NULL;
    return (new_point);
}
