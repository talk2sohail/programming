#include <stdio.h>
#include <malloc.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;
//this pointer will hold the link/head of the LinkedList
Node *head = NULL;

Node *pushAtBeg(int x)
{
    //it handles the empty NULL

    //create the node
    Node *new_node = (Node *)malloc(sizeof(Node));
    //feed the data
    new_node->data = x;
    //new_node points to the head
    new_node->next = head;
    //head points to the new_node
    head = new_node;

    return head;
}

Node *pushAtEnd(int x)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = x;
    //since  it will be the last Node
    new_node->next = NULL;
    //assign the link to tmp pointer
    Node *tmp = head;

    //if the list is empty
    if (head == NULL)
    {
        head = new_node;
        return head;
    }

    //else traverse upto the last node
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    //link the last node
    tmp->next = new_node;

    return head;
}

//list will not be empty for sure
Node *pushAfter(int prev_node_value, int new_node_value)
{
    //create the Node and feed the data
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = new_node_value;

    //traverse the list to find the node with given value(prev_node_value)
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == prev_node_value)
        {
            new_node->next = temp->next;
            temp->next = new_node;
            // no need to traverse the whole list
            return head;
        }
        temp = temp->next;
    }

    return head;
}

Node * RecusiveReverseLinkedList(Node *curr, Node *prev){

    if(curr == NULL ){
        return prev;
    }

    Node *next = curr->next;
    curr->next  = prev;
    return RecusiveReverseLinkedList(next, curr);
}
Node *reverseLinkedList()
{
    Node *prev = NULL;
    Node *next = NULL;
    Node *curr = NULL;

    // if the list contains only one item
    if (head->next == NULL)
    {
        return head;
    }
    //point the current pointer to the head
    curr = head;
    while (curr != NULL)
    {
        //now to the next node og current node
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
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

Node * rotate(Node *head , int k){


    //check if list is empty
    if(head == NULL || head->next == NULL) return head;
    int count = 1;
    Node *curr = head;
    //after this loop, curr will stand at kth node
    while(count < k && curr != NULL){
        curr = curr->next;
        count++;
    }
    //check if list is exhausted or curr is at last node
    //return the list
    if(curr == NULL) return head;

    //hold the pointer to the kth Node
    Node *kthNode = curr;

    //curr would be standing at the last Node
    while(curr->next != NULL) curr = curr->next;

    //join curr with the head
    curr->next = head;

    //make the new head
    head  = kthNode->next;

    //make the new tail
    kthNode->next = NULL;

    return head;
}
int main()
{
    head = (Node *)malloc(sizeof(Node));
    head->data = 1;
    head->next = NULL;
    pushAtBeg(11);
    pushAtBeg(12);
    pushAtBeg(9);
    pushAtEnd(10);
    pushAfter(11, 19);
    printLinkedList(head);
    printf("\n\nAfter reversing  k nodes: \n\n");
    //this function returns new head of the reversed list
    // Node * new_head = RecusiveReverseLinkedList(head, NULL);
    // printLinkedList(new_head);
    int k = 4;
    Node * new_head = rotate(head, k);
    printLinkedList(new_head);
    printf("\n");
    return 0;
}