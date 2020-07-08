

// O(1)
void deleteNode(Node *node)
{
   // Your code here
   if(node->next == NULL){
       node = NULL;
   }
   //copy the data from the next node
   node->data = node->next->data; 
   //take a pointer to the next node
   Node *next_p = node->next;
   //join the link from prev(given node ref) to the next of current node
   node->next = next_p->next;
}