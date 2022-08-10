#include <stdio.h>
#include <stdlib.h>

struct digit
{
    int num;
    struct digit *next;
};

struct digit* createDigitNode(int inputNum);

int main()
{
    struct digit *node = createDigitNode(5);

    printf("%d", node->num);
    
    free(node);
    
    return 0;
}

struct digit* createDigitNode(int inputNum)
{
    struct digit *ptr;
    ptr = (struct digit*)malloc(sizeof(struct digit));
    ptr->num = inputNum;
    ptr->next = NULL;
    return ptr;
}