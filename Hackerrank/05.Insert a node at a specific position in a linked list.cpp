/*
    https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem
*/

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* new_node = new SinglyLinkedListNode(data);

    if(position == 1){
        new_node -> next = head;
        head = new_node;
        return head;
    }
    SinglyLinkedListNode* temp = head;
    for(int i=0; i< position-1; i++){
        temp = temp -> next;  
    }
    new_node -> next = temp -> next;
    temp -> next = new_node;
    return head;
}


