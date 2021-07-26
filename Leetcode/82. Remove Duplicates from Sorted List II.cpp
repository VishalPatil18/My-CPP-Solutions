// My Solution
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return head;
        
        ListNode *curr = head -> next, *prev = head;
        unordered_set<int> s;
        while(curr != NULL){
            if(curr -> val == prev -> val){
                s.insert(curr -> val);
                ListNode *toDelete = curr;
                prev -> next = curr -> next;
                delete(toDelete);
                curr = prev -> next;
            }
            else{
                prev = prev -> next;
                curr = curr -> next;
            }
        }
        curr = head, prev = NULL;
        while(curr != NULL){
            if(s.find(curr -> val) != s.end()){
                ListNode *toDelete = curr;
                if(curr == head) head = head -> next;
                else prev -> next = curr -> next;
                delete(toDelete);
                if(prev) curr = prev -> next;
                else curr = head;
            }
            else {
                prev = curr;
                curr = curr -> next;
            }
        }
        
        return head;
    }
};

// Other SOlutions - Recursive
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return 0;
        if (!head->next) return head;
        
        int val = head->val;
        ListNode* p = head->next;
        
        if (p->val != val) {
            head->next = deleteDuplicates(p);
            return head;
        } else {
            while (p && p->val == val) p = p->next;
            return deleteDuplicates(p);
        }
    }
};

// Iterative SOlution
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        
        // create an auxiliary head pointer and a new iterator
        auto auxiliary_head = new ListNode(-1);
        auto iter = auxiliary_head;
        
        while(head != nullptr){
            if (head->next && head->val == head->next->val) {
                // if current node value is equal to its next value skip all nodes of that value
                int curr = head->val;
                while(head && head->val == curr) head = head->next;
            }
            else {
                // otherwise, assign node to next iterator and increment new iterator and increment node
                iter->next = head;
                iter = iter->next;
                head = head->next;
            }
        }
        iter -> next = nullptr;
        return auxiliary_head->next;
    }
};