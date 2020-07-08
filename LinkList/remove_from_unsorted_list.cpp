


//removes duplicate in O(n) space and O(n) time 
Node * removeDuplicates( Node *head) 
{
 // your code goes here
 
    if(head == NULL || head->next == NULL) return head;
    
    unordered_set<int> hash;
    
    Node *curr = head;
    Node *prev = NULL;
    
    while(curr != NULL){
        
        if(hash.find(curr->data) != hash.end()){
            
            prev->next = curr->next;
            free(curr);
        }else{
            
            hash.insert(curr->data);
            prev = curr;
        }
        
        curr = prev->next;
    }
    
    return head;
}