#include <stdio.h>
#include <stdlib.h>

struct digit
{
    int num;
    struct digit *next;
};

struct digit *createLinkedList(struct digit *start);

struct digit* createDigit(int inputNum);

void printNode(struct digit *node);

struct digit* append(struct digit *prev_node, int inputNum);

void freeDigit(struct digit *start);

void searchNode(struct digit *start);

struct digit *reverseLinkedList(struct digit *node);

int main()
{
    struct digit *start, *head, *reversedLinkedList;

    head = createLinkedList(start);
    printNode(head);
    reversedLinkedList = reverseLinkedList(head);
    searchNode(head);
    printNode(reversedLinkedList);
    freeDigit(head);
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
        printf("\nNode%d->num: %d", i, node->num);
        node = node->next;
        i += 1;
    }
    printf("\n");
}

struct digit *reverseLinkedList(struct digit *node)
{
    int num_of_elements = 0;
    struct digit *node_counter_temp = node;
    struct digit *node_array_temp = node;
    struct digit *head, *end, *new_node;

    while(node_counter_temp != NULL)
    {
        num_of_elements += 1;
        node_counter_temp = node_counter_temp->next;
    }

    int numArray[num_of_elements];

    while(node_array_temp != NULL)
    {
        for (int i = 0; i < num_of_elements; i++)
        {
            numArray[i] = node_array_temp->num;
            node_array_temp = node_array_temp->next;
        }
    }

    for (int i = num_of_elements - 1; i >= 0; i -= 1)
    {
        if (i == num_of_elements - 1)
        {
            head = createDigit(numArray[i]);
        }

        else if (i == num_of_elements - 2)
        {
            end = append(head, numArray[i]);
        }

        else if (i < num_of_elements - 2)
        {
            end = append(end, numArray[i]);
        }
    }
    
    new_node = head;

    return new_node;
}

struct digit* append(struct digit *prev_node, int inputNum)
{
    struct digit *new_node = (struct digit *)malloc(sizeof(struct digit));
    prev_node->next = new_node;
    new_node->num = inputNum;
    new_node->next = NULL;
    return new_node; 
}

struct digit *insertAtFront(struct digit * start, struct digit * newPtr)
{
    newPtr->next = start;
    return(newPtr);
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

struct digit *createLinkedList(struct digit *start)
{
    int numOfElements;
    struct digit *end = (struct digit*)malloc(sizeof(struct digit));

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
    return start;
}

void searchNode(struct digit *start)
{
    int target;
    int targetCount = 0;
    struct digit *ptr = start;

    printf("\nEnter a search-digit: ");
    scanf("%d", &target);

    while (ptr != NULL)
    {
        if (ptr->num == target)
        {
            targetCount += 1;
            printf("%d found at : %p\n", ptr->num, ptr);
        }
        ptr = ptr->next;
    }

    if (targetCount > 0)
    {
        printf("%d occurred %d times.\n", target, targetCount);
    } 
}