// My Solution - Recurrsive
class Solution {
public:
    ListNode* solve(ListNode* head, int &val){
        if(head == NULL) return head;
        
        if(head -> val == val){
            ListNode* todelete = head;
            head = head -> next;
            delete(todelete);
            return solve(head, val);
        }
        if(head) head -> next = solve(head -> next, val);
        return head;
    }
    
    ListNode* removeElements(ListNode* head, int val){
        if(head == NULL) return NULL;
        
        return solve(head, val);
    }
};