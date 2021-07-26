// My Solution - Brute Force O(n)
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k){
        if(head == NULL || head -> next == NULL) return head;
        
        ListNode *temp = head;
        int size = 1;
        while(temp -> next != NULL){
            temp = temp -> next;
            size++;
        }
        
        temp = head;
        ListNode *temp1, *temp2;
        for(int i=0; i<size; ++i){
            if(i == k-1) temp1 = temp;
            if(i == size - k) temp2 = temp;
            temp = temp -> next;
        }
        swap(temp1 -> val, temp2 -> val);
        
        return head;
    }
};

// One Pass Solution
// When we reach k-th node, we set n1 to the current node, and n2 - to the head. We continue traversing the list, but now we also move n2. When we reach the end, n2 will points to k-th node from end.

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k){
        ListNode *n1 = nullptr, *n2 = nullptr;
        for(auto p = head; p != nullptr; p = p->next){
            n2 = n2 == nullptr ? nullptr : n2->next;
            if (--k == 0) {
                n1 = p;
                n2 = head;
            }
        }
        swap(n1->val, n2->val);
        return head;
    }
};