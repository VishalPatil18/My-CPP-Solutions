/*
    https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list/problem
*/

DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    DoublyLinkedListNode *current = head, *prev_node = current -> prev;
    while(current != NULL){
        // if(current -> next != NULL)
            current -> prev = current -> next;
        // else
            // current -> prev = NULL;
        if(head == current)
            current -> next = NULL;
        else
            current -> next = prev_node;
        prev_node = current;
        if(current -> prev == NULL)
            head = current;
        current = current -> prev;
    }
    return head;
}
