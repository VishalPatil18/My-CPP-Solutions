 // My Solution
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        multiset<int> s;
        ListNode *curr = head;
        while(curr){
            s.insert(curr -> val);
            curr = curr -> next;
        }
        curr = head;
        for(int x : s){
            curr -> val = x;
            curr = curr -> next;
        }
        return head;
    }
};