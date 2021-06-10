class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prevNode = NULL, *currNode = head, *nextNode;
        while(currNode != NULL){
            nextNode = currNode -> next;
            currNode -> next = prevNode;
            prevNode = currNode;
            currNode = nextNode;
        }
        head = prevNode;
        return head;
    }
};