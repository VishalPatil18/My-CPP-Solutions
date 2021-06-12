Node * deleteAtPosition(Node *head,int pos)
{
    int count = 1;
    Node *curr = head;
    
    if(head == NULL) return NULL;
    else if(pos == 1){
        Node *toDelete = head -> next;
        head -> data = toDelete -> data;
        head -> next = toDelete -> next;
        delete(toDelete);
        return head;
    }
    
    do{
        count++;
        if(count == pos){
            Node *toDelete = curr -> next;
            curr -> next = toDelete -> next;
            delete(toDelete);
        }
        curr = curr -> next;
    } while(curr != head);
    
    return head;
}