


//removes duplicate from sorted list in O(n) time
Node * removeDuplicate(Node *root){

    if( root == NULL || root->next == NULL) return root;
    Node *curr = root;
    Node *prev ;
    while( curr->next != NULL && prev != NULL){
        
        if(curr->data == prev->data){
            prev->next = curr->next;
            curr = curr->next;
        }else{
            prev = curr;
            curr = curr->next;
        }
    }
    
    return root;

}

