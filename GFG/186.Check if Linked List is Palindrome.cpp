// My Solution
class Solution{
    public:
    bool isPalindrome(Node *head)
    {
        if(head == NULL || head -> next == NULL) return true;
        
        Node *fast = head, *slow = head;
        while(fast != nullptr && fast -> next != nullptr){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        // If list had odd no. of nodes then delete the exact middle node and move slow to next node
        if(fast != NULL){
            slow -> data = slow -> next -> data;
            Node *toDelete = slow -> next;
            slow -> next = toDelete -> next;
            delete(toDelete);
        }
        
        // Reversing the node after the middle node
        Node *prev = NULL, *nextNode;
        while(slow != NULL){
            nextNode = slow -> next;
            slow -> next = prev;
            prev = slow;
            slow = nextNode;
        }
        Node *head2 = prev;
        
        // Checking if the two broken nodes are equal or not
        while(head != NULL && head2 != NULL){
            if(head2 -> data != head -> data) return false;
            head2 = head2 -> next;
            head = head -> next;
        }
        return true;
    }
};