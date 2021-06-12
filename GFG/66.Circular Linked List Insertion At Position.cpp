void insertAtPosition(Node *head, int pos, int data)
{
    //Your code here
    int count = 0;
    Node *curr = head;
    Node *newNode = new Node(data);
    
    if(head == NULL) return;
    
    do{
        count++;
        if(count == pos){
            newNode -> next = curr -> next;
            curr -> next = newNode;
        }
        curr = curr -> next;
    } while(curr != head);
}