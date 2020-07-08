

//worst case O(n)

int countNodesinLoop(struct Node *head)
{
    // Code here  
      //empty list
    if(head == NULL ) return 0;
    // self loop in the head
    if( head->next == head ) return 1;
    
    Node *slow = head;
    Node *fast = head;
   Node *ref = NULL;
    while(fast != NULL && slow != NULL && fast->next != NULL){
        
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast){
            int res = 1;  
            Node *temp = slow;  
            while (temp->next != slow)  
            {  
                res++;  
                temp = temp->next;  
            }  
            return res;
        }   
    }
    
    return 0;
}