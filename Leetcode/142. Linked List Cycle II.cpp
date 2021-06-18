// My Solution
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head) return NULL;
        
        ListNode *slow = head, *fast = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) break;
        }
        if(fast -> next == NULL || fast -> next -> next == NULL) return NULL;
        
        fast = head;
        while(slow != fast){
            slow = slow -> next;
            fast = fast -> next;
        }
        return slow;    
    }
};

// Optimized Solution
ListNode *detectCycle(ListNode *head) {
    ListNode* slow = head, *fast = head;
    while(fast && fast->next) {
        slow = slow->next, fast = fast->next->next;
        if (slow == fast) {
            slow = head;
            while (slow != fast)  slow = slow->next, fast = fast->next;
            return slow;
        }
    }
    return nullptr;
}