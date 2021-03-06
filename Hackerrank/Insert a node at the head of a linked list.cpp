/*
    https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/problem
*/

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* head, int data) {
	SinglyLinkedListNode* new_node = new SinglyLinkedListNode(data);

    if (head == nullptr){
        head = new_node; 
    }
    else{
        SinglyLinkedListNode* temp = head;
        head = new_node;
        new_node -> next = temp;
    }
    return head;
}


