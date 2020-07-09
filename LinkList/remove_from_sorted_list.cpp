

//removes duplicate from sorted list in O(n) time
Node *removeDuplicate(Node *root)
{

    if (root == NULL || root->next == NULL)
        return root;
    Node *curr = root;
    while (curr->next != NULL)
    {

        if (curr->data == curr->next->data)
        {
            Node *next = curr->next->next;
            free(curr->next);
            curr->next = next;
        }
        else
        {
            curr = curr->next;
        }
    }

    return root;
}
