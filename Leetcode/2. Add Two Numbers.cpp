// My Solution
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = NULL, *temp = head;
        int carry = 0;
        
        while(l1 || l2){
            int digit;
            if(l1 && l2) digit = l1 -> val + l2 -> val + carry;
            else if(l1) digit = l1 -> val + carry;
            else if(l2) digit = l2 -> val + carry;
            carry = 0;
            
            if(digit > 9){ carry = 1; digit = digit % 10;}
            
            ListNode *newNode = new ListNode(digit);
            if(head == NULL){ head = newNode; temp = head; }
            else{
                temp -> next = newNode;
                temp = temp -> next;
            }
            if(l1) l1 = l1 -> next;
            if(l2) l2 = l2 -> next;
        }

        if(carry == 1) temp -> next = new ListNode(1);
        
        return head;
    }
};

// Other Solutions
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode preHead(0), *p = &preHead;
    int extra = 0;
    while (l1 || l2 || extra) {
        if (l1) extra += l1->val, l1 = l1->next;
        if (l2) extra += l2->val, l2 = l2->next;
        p->next = new ListNode(extra % 10);
        extra /= 10;
        p = p->next;
    }
    return preHead.next;
}