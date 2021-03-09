/*
    https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list/problem
*/

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode *current_node = head, *prev_node = current_node -> prev;
    DoublyLinkedListNode *new_node = new DoublyLinkedListNode(data);
    if(head == NULL){
        head = new_node;
        return head;
    }
    while(data > current_node -> data && current_node -> next != NULL)
        current_node = current_node -> next;

    if(data > current_node -> data && current_node -> next != NULL)
        current_node = current_node -> prev;
    
    if(current_node -> prev == NULL){
        new_node -> next = head;
        head = new_node;
    }

    if(current_node -> next == NULL && data > current_node -> data){
        new_node -> next = NULL;
        new_node -> prev = current_node;
        current_node -> next = new_node;
        current_node = current_node -> next;
    }

    else{
        new_node -> next = current_node;
        new_node -> prev = current_node -> prev;
        prev_node = current_node -> prev;
        current_node -> prev = new_node;
        if(prev_node != NULL)
            prev_node -> next = new_node;      
        current_node = current_node -> next;
    }
    return head;
}
