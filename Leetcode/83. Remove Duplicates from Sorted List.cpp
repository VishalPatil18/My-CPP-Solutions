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