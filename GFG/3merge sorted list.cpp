/*  Merge two sorted linked lists
    -----------------------------
    
    Method 1:
    --------
*/

Node* sortedMerge(Node* head_A, Node* head_B) {
    Node *temp1, *temp2, *next_temp1, *next_temp2;
    
    temp1 = head_A; next_temp1 = temp1 -> next;
    temp2 = head_B; next_temp2 = temp2 -> next;
    
    if(temp1 == NULL && temp2 == NULL) return NULL;
    else if(temp2 == NULL) return head_A;
    else if(temp1 == NULL) return head_B;

    while(temp1 -> next != NULL && temp2 != NULL){
        if(temp2 -> data < temp1 -> data){
            while(((temp2 -> data < temp1 -> data) && (next_temp2 -> data < temp1 -> data)) && temp2 -> next != NULL){
                temp2 = temp2 -> next;
                next_temp2 = temp2 -> next;
            }
            temp2 -> next = temp1;
            if(temp1 == head_A) head_A = head_B;
            
            temp2 = next_temp2;
            temp1 = temp1 -> next;
            next_temp1 = temp1 -> next;
            next_temp2 = temp2 -> next;
        }
        else if((temp2 -> data > temp1 -> data) && (temp2 -> data < next_temp1 -> data)){
            temp2 -> next = temp1 -> next;
            temp1 -> next = temp2;
            temp1 = temp2;
            temp2 = next_temp2;
            next_temp2 = temp2 -> next;
            next_temp1 = temp1 -> next;
        }
        else {
            temp1 = temp1 -> next;
            if(temp1 != NULL) next_temp1 = temp1 -> next;
        }
    }
    if(temp1 -> next == NULL) {
        temp1 -> next = temp2;
    }
    return head_A;
}

/*================================================================================*/
/*  Method 2:
    --------
*/

Node* sortedMerge(Node* head_A, Node* head_B) {  
    // code here
    Node *head, *h1, *h2, *listSorted;
    h1 = head_A;
    h2 = head_B;
    char flag;
    
    if(h1 == NULL && h2 == NULL) return NULL;
    else if(h1 == NULL) return h2;
    else if(h2 == NULL) return h1;
    
    if(h1 -> data < h2 -> data){
        head = h1;
        flag = 'h1';
        h1 = h1 -> next;
    }
    else if(h1 -> data > h2 -> data){
        head = h2;
        flag = 'h2';
        h2 = h2 -> next;
    }
    
    listSorted = head;
    while(h1 != NULL && h2 != NULL) {
        if(h1 -> data < h2 -> data) {
            if(flag == 'h1'){
                listSorted = h1;
                h1 = h1 -> next;
            }
            else {
                listSorted -> next = h1;
                h1 = h1 -> next;
                listSorted = listSorted -> next;
                flag = 'h1';
            }
        }
        else {
            if(flag == 'h1'){
                listSorted -> next = h2;
                listSorted = listSorted -> next;
                h2 = h2 -> next;
                flag = 'h2';
            }
            else {
                listSorted = h2;
                h2 = h2 -> next;
            }
        }
    }
    if(h1 == NULL)
        listSorted -> next = h2;
    else if(h2 == NULL)
        listSorted -> next = h1;
    
    return head;
    
}  

/*================================================================================*/
/*  Using Recurrsion:
    ----------------
*/

Node* SortedMerge(Node* a, Node* b) 
{ 
    Node* result = NULL; 
    
    /* Base cases */
    if (a == NULL) 
        return(b); 
    else if (b == NULL) 
        return(a); 
    
    /* Pick either a or b, and recur */
    if (a->data <= b->data) 
    { 
        result = a; 
        result->next = SortedMerge(a->next, b); 
    } 
    else
    { 
        result = b; 
        result->next = SortedMerge(a, b->next); 
    } 
    return(result); 
} 
