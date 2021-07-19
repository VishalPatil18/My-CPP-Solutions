class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head -> next == NULL) return head;
        
        ListNode *temp = head, *lastNode = head;
        int size = 1;
        while(temp -> next != NULL){ temp = temp -> next; size++; }
        lastNode = temp;
        
        temp = head;
        int x = size - k % size;
        while(x--){ 
            ListNode *temp = head;
            head = temp -> next;
            lastNode -> next = temp;
            lastNode = lastNode -> next;
            temp -> next = NULL;
        }
        
        return head;       
    }
};