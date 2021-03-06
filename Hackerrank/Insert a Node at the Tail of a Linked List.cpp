/*
    https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem
*/

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
	SinglyLinkedListNode* new_node = new SinglyLinkedListNode(data);
    
    if (head == nullptr)
        head = new_node;
    else{
        SinglyLinkedListNode* temp = head;
        while(temp -> next != NULL) {
            temp = temp -> next;
        }
        temp -> next = new_node;
    }
    return head;
}


