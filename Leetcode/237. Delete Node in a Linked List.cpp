// Method 1
class Solution {
public:
    void deleteNode(ListNode* node) {
        node -> val = node -> next -> val;
        ListNode* toDelete = node -> next;
        node -> next = node -> next -> next;
        delete(toDelete);
    }
};

// Method 2
class Solution {
public:
    void deleteNode(ListNode* node) {
        // ListNode* temp = node;
        while(node -> next != NULL){
            node -> val = node -> next -> val;
            if(node -> next -> next == NULL){
                ListNode* temp = node -> next;
                node -> next = NULL;
                delete(temp);
                break;
            }
            else node = node -> next;
        }
    }
};