Node * joinTheLists(Node * head1, Node * head2)
{
    //Your code here
    Node* curr = head1;
    while(curr -> next != NULL) curr = curr -> next;
    curr -> next = head2;
    return head1;
}