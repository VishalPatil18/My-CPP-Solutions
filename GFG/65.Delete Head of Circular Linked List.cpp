Node * deleteHead(Node *head)
{
    //Your code here
    if(head == NULL || head -> next == head) return NULL;
    
    Node *curr = head;
    Node *newHead = head -> next;
    
    while(curr -> next != head) curr = curr -> next;
    
    curr -> next = newHead;
    head -> next = NULL;
    delete(head);
    
    return newHead;
}