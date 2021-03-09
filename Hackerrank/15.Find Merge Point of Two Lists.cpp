/*
    https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/problem
*/

int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *temp1 = head1, *temp2 = head2;

    while(temp2 -> next != NULL){
        while(temp1 -> next != NULL){
            if(temp1 -> next == temp2 -> next)
                return temp2 ->next -> data;
            else
                temp1 = temp1 -> next;
        }
        temp2 = temp2 -> next;
        temp1 = head1;
    }
    return head1 -> data;
}

