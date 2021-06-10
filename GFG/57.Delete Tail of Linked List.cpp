Node * deleteTail(Node *head)
{
    //Your Code here
    Node* curr = head;
    while(curr -> next -> next != NULL) curr = curr -> next;
    Node* temp = curr -> next;
    curr -> next = NULL;
    delete(temp);
    return head;
}