Node * insertInSorted(Node * head, int data)
{
    Node* temp = new Node(data);
    if(head == NULL) return temp;
    if(data < head -> data){
        temp -> next = head;
        return temp;
    }
    
    Node* curr = head;
    while((curr -> next != NULL) && (curr->next->data < data)) curr = curr -> next;
    temp -> next = curr -> next;
    curr -> next = temp;
    return head;
}
