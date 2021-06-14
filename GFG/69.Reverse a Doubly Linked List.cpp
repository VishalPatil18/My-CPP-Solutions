Node* reverseDLL(Node * head)
{
    while(head){
        Node *next = head -> next;
        head -> next = head -> prev;
        head -> prev = next;
        
        if(head -> prev == NULL) break;
        
        head = head -> prev;
    }
    return head;
}