// My Solution
struct Node* pairwise_swap(struct Node* head)
{
    Node *first = head, *second = head -> next, *prev = NULL;
    if(second == NULL) return head;
    
    head = second;
    first -> next = second -> next;
    second -> next = first;
    
    prev = first;
    first = first -> next;
    if(first != NULL) second = first -> next;
    
    while(second != NULL && first != NULL){
        prev -> next = second;
        first -> next = second -> next;
        second -> next = first;
        
        prev = first;
        first = first -> next;
        if(first != NULL) second = first -> next;
    }
    return head;
}