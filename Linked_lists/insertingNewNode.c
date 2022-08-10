#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int x;
    int y;
    struct Node *next;
};

void printTuplesNode(struct Node *n);

void push(struct Node **head_ref, int x, int y);

void insertAfter(struct Node *prev_node, int x, int y);

void append(struct Node** head_ref, int x, int y);

int main()
{
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    struct Node *second = (struct Node*)malloc(sizeof(struct Node));
    struct Node *third = (struct Node*)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node*)malloc(sizeof(struct Node));

    head->x = 1;
    head->y = 2;
    head->next = second;
    second->x = 3;
    second->y = 4;
    second->next = third;
    third->x = 5;
    third->y = 6;
    third->next = fourth;
    fourth->x = 7;
    fourth->y = 8;
    fourth->next = NULL;

    printTuplesNode(head);

    //second becomes head
    printTuplesNode(second);

    //third becomes head
    printTuplesNode(third);

    //fourth becomes head
    printTuplesNode(fourth);

    push(&head, 9, 10);
    printTuplesNode(head);

    insertAfter(head, 11, 12);
    printTuplesNode(head);

    insertAfter(second, 13, 14);
    printTuplesNode(head);

    insertAfter(third, 15, 16);
    printTuplesNode(head);

    insertAfter(fourth, 17, 18);
    printTuplesNode(head);

    append(&fourth, 19, 20);
    printTuplesNode(head);

    append(&fourth, 21, 22);
    printTuplesNode(head);

    append(&fourth, 23, 24);
    printTuplesNode(head);
    return 0;
}

void printTuplesNode(struct Node *n)
{
    printf("Printing all the tuples in a linked-list: \n");
    while(n != NULL)
    {
        printf("(%d, %d) ", n->x, n->y);
        n = n->next;
    }
    printf("\n");
}

//void push(struct Node **head_ref, int x, int y) adds the new-node at the beginning of the linked_list
void push(struct Node **head_ref, int x, int y)
{
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->x = x;
    new_node->y = y;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

//Given a node prev_node, insert a new node after the given prev_node
void insertAfter(struct Node *prev_node, int x, int y)
{
    if (prev_node == NULL)
    {
        printf("The given node cannot be null as we are not adding a new node at the end of the linked-list");
    }
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->x = x;
    new_node->y = y;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

//Given a reference (pointer-to-pointer) to the head of a list and an int, appends a new node at the end.

void append(struct Node** head_ref, int x, int y)
{
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));

    struct Node *last = *head_ref;
    new_node->x = x;
    new_node->y = y;
    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_node;
}