Node *removeDuplicates(Node *head)
{
    Node *curr = head;
    if(head == NULL || head -> next == NULL) return head;
    
    while(curr -> next != NULL){
        if(curr -> data == curr -> next -> data){
            Node *temp = curr -> next;
            curr -> next = temp -> next;
            delete(temp);
        }
        else curr = curr -> next;
    }
    return head;
}