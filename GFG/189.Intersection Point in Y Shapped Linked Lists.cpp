// My Solution
int intersectPoint(Node* head1, Node* head2)
{
    Node *temp1 = head1, *temp2 = head2;
    if(temp1 == NULL || temp2 == NULL) return -1;
    
    bool flag1 = true, flag2 = true;
    while(temp1 != temp2){
        temp1 = temp1 -> next;
        temp2 = temp2 -> next;
        
        if(temp1 == NULL && flag1){ temp1 = head2; flag1 = false; }
        else if(temp1 == NULL && !flag1) break;
        if(temp2 == NULL && flag2){ temp2 = head1; flag2 = false; }
        else if(temp2 == NULL && !flag2) break;
        
        if(temp1 == temp2) return temp1 -> data;
    }
    return -1;
}