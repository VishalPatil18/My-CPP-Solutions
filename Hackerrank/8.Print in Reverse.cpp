/*
    https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem
*/

void reversePrint(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* temp = head;
    if (temp == NULL)
        return;
    reversePrint(temp -> next);
    cout << temp -> data << endl;
}
