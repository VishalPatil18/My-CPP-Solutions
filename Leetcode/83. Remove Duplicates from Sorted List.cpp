// My Solution
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr || head -> next == nullptr) return head;
        ListNode *curr = head;
        while(curr -> next != nullptr){
            if(curr -> val == curr -> next -> val){
                ListNode *toDelete = curr -> next;
                curr -> next = toDelete -> next;
                delete(toDelete);
            }
            else curr = curr -> next;
        }
        return head;
    }
};

// My SOlution - Recursive Approach
class Solution {
public:
    ListNode* solve(ListNode* head, int num){
        if(head == NULL) return head;
        
        if(head -> val == num){
            ListNode* todelete = head;
            head = head -> next;
            delete(todelete);
            return solve(head, num);
        }
        if(head) head -> next = solve(head -> next, head -> val);
        return head;
    }
    
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return head;
        head -> next = solve(head -> next, head -> val);
        return head;
    }
};