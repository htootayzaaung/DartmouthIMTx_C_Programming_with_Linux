#include <stdio.h>
#include <stdlib.h>

struct digit
{
    int num;
    struct digit *next;
};

struct digit *createDigit(int inputNum);

void printNode(struct digit *node);

struct digit* append(struct digit *end, struct digit *newDigitptr);

int main()
{
    struct digit *start = createDigit(1);
    printNode(start);

    struct digit *end = createDigit(2);
    end = append(start, end);
    printNode(start);

    struct digit *new_node = createDigit(3);
    end = append(end, new_node);
    printNode(start);

    new_node = createDigit(4);
    end = append(end, new_node);
    printNode(start);
    
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

struct digit* append(struct digit *end, struct digit *newDigitptr)
{
    end->next = newDigitptr;
    end = newDigitptr;
    return end;
}