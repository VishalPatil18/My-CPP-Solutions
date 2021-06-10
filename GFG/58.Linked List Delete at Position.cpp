Node * deleteAtPosition(Node *head,int pos)
{
    //Your code here
    if(head == NULL) return head;
    Node* curr = head;
    if(pos == 1){
        head = head -> next;
        delete(curr);
        return head;
    }
    
    for(int i=1; i<=pos-2; ++i) curr = curr -> next;
    if(curr == NULL || curr -> next == NULL) return head;
    Node* temp = curr -> next;
    curr -> next = temp -> next;
    delete(temp);
    return head;
}