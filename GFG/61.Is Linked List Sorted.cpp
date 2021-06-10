bool isSorted(Node * head)
{
    //Your code here
    bool inc=true, dec=true;
    
    while((inc == true || dec == true) && (head -> next != NULL)){
        if(head -> data < head -> next -> data) dec = false;
        else if(head -> data > head -> next -> data) inc = false;
        head = head -> next;
    }
    
    return inc || dec;
}