// My Solution - https://leetcode.com/problems/palindrome-linked-list/discuss/1263084/C%2B%2B-4-Step-Easy-Solution-O(1)-space-and-O(N)-time
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL) return false;
        if(head -> next == NULL) return true;
        
        // Find middle with fast and slow Method
        ListNode *fast = head, *slow = head;
        while(fast != nullptr && fast -> next != nullptr){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        // If list had odd no. of nodes then delete the exact middle node and move slow to next node
        if(fast != NULL){
            slow -> val = slow -> next -> val;
            ListNode *toDelete = slow -> next;
            slow -> next = toDelete -> next;
            delete(toDelete);
        }
        
        // Reversing the node after the middle node
        ListNode *prev = NULL, *nextNode;
        while(slow != NULL){
            nextNode = slow -> next;
            slow -> next = prev;
            prev = slow;
            slow = nextNode;
        }
        ListNode *head2 = prev;
        
        // Checking if the two broken nodes are equal or not
        while(head != NULL && head2 != NULL){
            if(head2 -> val != head -> val) return false;
            head2 = head2 -> next;
            head = head -> next;
        }
        return true;
    }
};

// 2nd Method
class Solution {
public:
    ListNode* temp;
    bool isPalindrome(ListNode* head) {
        temp = head;
        return check(head);
    }
    
    bool check(ListNode* p) {
        if (NULL == p) return true;
        bool isPal = check(p->next) & (temp->val == p->val);
        temp = temp->next;
        return isPal;
    }
};

// Similar to my solution just easy to understand
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head, *fast = head, *prev, *temp;
        
        while (fast && fast->next) slow = slow->next, fast = fast->next->next;
        
        prev = slow, slow = slow->next, prev->next = NULL;
        while (slow) temp = slow->next, slow->next = prev, prev = slow, slow = temp;
        fast = head, slow = prev;
        
        while (slow)
            if (fast->val != slow->val) return false;
            else fast = fast->next, slow = slow->next;
        
        return true;
    }
};