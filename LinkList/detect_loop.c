
// floyd-warshall cycle O(1)
bool detectLoop(Node* head)
{
    // your code here
    //empty list
    if(head == NULL ) return 0;
    // self loop in the head
    if( head->next == head ) return 1;
    
    Node *slow = head;
    Node *fast = head;
    
    while(fast != NULL && slow != NULL && fast->next != NULL){
        
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return 1;
        }   
    }
    return 0;
}