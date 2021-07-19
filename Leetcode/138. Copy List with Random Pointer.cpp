// My Solution
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL) return head;
        
        Node *curr = head;
        while(curr != NULL){
            Node *next = curr -> next;
            curr -> next = new Node(curr -> val);
            curr -> next -> next = next;
            curr = next;
        }
    
        curr = head;
        while(curr != NULL){
            if(curr -> random == NULL) curr -> next -> random = NULL;
            else curr -> next -> random = curr -> random -> next;
            curr = curr -> next -> next;
        }
        
        curr = head;
        Node *newHead = head -> next, *temp = newHead;
        while(curr != NULL && temp != NULL){
            curr -> next = curr -> next ? curr -> next -> next : curr -> next;
            temp -> next = temp -> next ? temp -> next -> next : temp -> next;
            curr = curr -> next;
            temp = temp -> next;
        }
        
        return newHead;
    }
};