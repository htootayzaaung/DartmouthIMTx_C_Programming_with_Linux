#include <stdio.h>
#include <stdlib.h>

struct digit
{
    int num;
    struct digit *next;
};

void createLinkedList();

struct digit* createDigit(int inputNum);

void printNode(struct digit *node);

struct digit* append(struct digit *prev_node, int inputNum);

void freeDigit(struct digit *start);

int main()
{
    createLinkedList();
    return 0;
}

struct digit *createDigit(int inputNum)
{
    struct digit *ptr;
    ptr = (struct digit*)malloc(sizeof(struct digit));
    ptr->num = inputNum;
    ptr->next = NULL;
    return ptr;
}

void printNode(struct digit *node)
{
    int i = 1;
    while(node != NULL)
    {
        printf("Node%d->num: %d\n", i, node->num);
        node = node->next;
        i += 1;
    }
    printf("\n");
}

struct digit* append(struct digit *prev_node, int inputNum)
{
    struct digit *new_node = (struct digit *)malloc(sizeof(struct digit));
    prev_node->next = new_node;
    new_node->num = inputNum;
    new_node->next = NULL;
    return new_node; 
}

void freeDigit(struct digit *start)
{
    struct digit *ptr = start;
    struct digit *temp;

    while (ptr != NULL)
    {
        temp = ptr->next;
        free(ptr);
        ptr = temp;
    }
}

void createLinkedList()
{
    int numOfElements;
    struct digit *start, *end;

    printf("Enter number of elements: ");
    scanf("%d", &numOfElements);

    for (int i = 0; i < numOfElements; i++)
    {
        int element;

        if (i == 0)
        {
            printf("Enter digit: ");
            scanf("%d", &element);
            start = createDigit(element);
        }

        else if (i == 1)
        {
            printf("Enter digit: ");
            scanf("%d", &element);
            end = append(start, element);
        }

        else if (i > 1)
        {
            printf("Enter digit: ");
            scanf("%d", &element);
            end = append(end, element);
        }
    }

    printNode(start);
    freeDigit(start);
}