Node * deleteTail(Node * head)
{
    if(head == NULL || head -> next == head) return NULL;
    
    Node *curr = head -> next;
    Node *prev = head;
    while(curr -> next != head){
        prev = curr;
        curr = curr -> next;
    }
    
    prev -> next = curr -> next;
    delete(curr);
    
    return head;
}