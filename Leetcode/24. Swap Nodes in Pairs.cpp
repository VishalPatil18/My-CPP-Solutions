class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head -> next == NULL) return head;
        
        ListNode *first = head, *second = head -> next, *prev = NULL;

        head = second;
        first -> next = second -> next;
        second -> next = first;

        prev = first;
        first = first -> next;
        if(first != NULL) second = first -> next;

        while(second != NULL && first != NULL){
            prev -> next = second;
            first -> next = second -> next;
            second -> next = first;

            prev = first;
            first = first -> next;
            if(first != NULL) second = first -> next;
        }
        return head;
    }
};