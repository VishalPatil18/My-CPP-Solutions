/*
    https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem
*/

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode* temp = head;
    if (position == 0) {
        head = temp -> next;
        delete(temp);
        return head;
    }
    for(int i=0; i<position-1; i++) {
        temp = temp -> next;
    }
    SinglyLinkedListNode* temp2 = temp -> next;
    temp -> next = temp2 -> next; 
    delete(temp2);
    return head;
}
