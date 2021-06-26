 // My Solution
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL) return l2;
        else if(l2 == NULL) return l1;
        
        ListNode *head = NULL;
        if(l1 -> val < l2 -> val){
            head = l1;
            l1 = l1 -> next;
        } else {
            head = l2;
            l2 = l2 -> next;
        }
        
        ListNode *temp = head;
        while(l1 && l2){
            if(l1 -> val < l2 -> val){
                temp -> next = l1;
                l1 = l1 -> next;
                temp = temp -> next;
            } else{
                temp -> next = l2;
                l2 = l2 -> next;
                temp = temp -> next;
            }
        }
        if(l1) temp -> next = l1;
        else temp -> next = l2;
        
        return head;
    }
};

// Other Solutions
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;

    if(!l1 || l2 && l1->val > l2->val) swap(l1, l2);
    if(l1) l1->next = mergeTwoLists(l1->next, l2);
    return l1;
}

// Recursive Solution
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;
    
    if (l1->val <= l2->val) {
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    } else {
        l2->next = mergeTwoLists(l1, l2->next);
        return l2;
    }
}