#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *reverseLinkedList(Node *node)
{

    return node;
}

void printLinkedList(Node *node)
{
    while (node != NULL)
    {
        if (node->next == NULL)
        {
            printf("%d", node->data);
        }
        else
            printf("%d->", node->data);
        node = node->next;
    }
}

int main()
{
    //create the nodes
    Node e1 = {1, NULL};
    Node e2 = {2, NULL};
    Node e3 = {3, NULL};

    //create the pointers to the node
    Node *head = &e1;
    Node *second = &e2;
    Node *third = &e3;

    //link the nodes to make the link list
    head->next = second;
    second->next = third;
    third->next = NULL;

    printLinkedList(head);
    printf("\n");
    return 0;
}