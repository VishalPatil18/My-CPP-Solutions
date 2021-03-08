/*
    https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem
*/

int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    SinglyLinkedListNode* temp = head, *runner = head;

    for(int i=0; i<positionFromTail; i++){
        temp = temp -> next;
    }

    while(temp -> next != NULL){
        temp = temp -> next;
        runner = runner -> next;
    }

    return runner -> data;
}
