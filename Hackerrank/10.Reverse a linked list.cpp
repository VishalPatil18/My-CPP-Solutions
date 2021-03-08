/*
    https://www.hackerrank.com/challenges/reverse-a-linked-list/problem
*/

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *current, *prev, *next;
    prev = NULL;
    current = head;

    while(current != NULL){
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
