class Solution{
    public:
    int findMiddle(Node * head)
    {
        if(head -> next == head) return head -> data;
        Node *fast = head, *slow = head;
        
        while(fast -> next != head){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        return slow -> data;
    }
};