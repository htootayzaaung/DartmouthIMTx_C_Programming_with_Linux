#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node
{
    int data;
    struct Node *next;
};

void printList(struct Node *n);

void incrementNode(struct Node *n);

void doubleNode(struct Node *n);

void squareNode(struct Node *n);

int main()
{
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data  = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    printList(head);
    incrementNode(head);
    doubleNode(head);
    squareNode(head);

    return 0;
}

void printList(struct Node *n)
{
    printf("All the elements in the linked-list: \n");
    while(n != NULL)
    {
        printf("%d ", n->data);
        n = n->next;
    }
    printf("\n");
}

void incrementNode(struct Node *n)
{
    printf("Incrementing each element in the linked-list by 1: \n");
    while(n != NULL)
    {
        n->data += 1;
        printf("%d ", n->data);
        n = n->next;
    }
    printf("\n");
}

void doubleNode(struct Node *n)
{
    printf("Doubling all the elements in the linked-list: \n");
    while (n != NULL)
    {
        n->data *= 2;
        printf("%d ", n->data);
        n = n->next;
    }
    printf("\n");
}

void squareNode(struct Node *n)
{
    printf("Squaring all the elements in the linked-list: \n");
    while (n != NULL)
    {
        n->data = pow(n->data, 2);
        printf("%d ", n->data);
        n = n->next;
    }
    printf("\n");
}