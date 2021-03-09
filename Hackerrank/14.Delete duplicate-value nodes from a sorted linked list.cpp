/*
    https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list/problem
*/

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *temp = head, *next_node = temp -> next;

    if(head == NULL)
        return head;
    if(temp -> next == NULL)
        return head;

    while(temp -> next != NULL){
        if(temp -> data == next_node -> data){
            if(head == temp){
                head = next_node;
                next_node = next_node -> next;
                delete(temp);
                temp = head;
            }
            else{
                if(next_node -> next != NULL){
                    temp -> next = next_node -> next;
                    delete(next_node);
                    next_node = temp -> next;
                }
                else{
                    delete(next_node);
                    temp -> next = NULL;
                }
            }
        }
        else{
            temp = next_node;
            next_node = next_node -> next;
        }
    }
    return head;
}
