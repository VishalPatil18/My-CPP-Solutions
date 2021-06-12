Node *insertInHead(Node * head, int data)
{
    //Your code here
    Node *newNode = new Node(data);
    if(head == NULL) return newNode;
    
    newNode -> next = head -> next;
    head -> next = newNode;
    int temp = head -> data;
    head -> data = newNode -> data;
    newNode -> data = temp;
    return head;
}