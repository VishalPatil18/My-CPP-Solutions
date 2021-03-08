/*
    https://www.hackerrank.com/challenges/compare-two-linked-lists/problem
*/

bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *temp1 = head1, *temp2 = head2;
    while(temp1 != NULL && temp2 != NULL){
        if ((temp1 -> data) == (temp2 -> data)){
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        else
            return 0;
    }
    if (temp1 == NULL && temp2 == NULL)
        return 1;
    else
        return 0;
}
