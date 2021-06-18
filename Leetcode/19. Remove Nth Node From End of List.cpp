// My Solution
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *h1 = head, *h2 = head;
        while(n-->0) h2 = h2 -> next; 
        
        if(h2 == NULL) return head -> next;
        h2 = h2 -> next;

        while(h2 != NULL){
            h1 = h1 -> next;  
            h2 = h2 -> next;
        }
        ListNode *toDelete = h1 -> next;
        h1 -> next = toDelete -> next;
        delete(toDelete);
        return head;
    }
};

// Optimized Solution
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *h1 = head, *h2 = head;
        while(n-->0) h2 = h2 -> next; 
        
        if(h2 == NULL) return head -> next;
        h2 = h2 -> next;

        while(h2 != NULL){
            h1 = h1 -> next;  
            h2 = h2 -> next;
        }
        h1 -> next = h1 -> next -> next;
        return head;    
    }
};