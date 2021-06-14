class Solution{
    public:
    bool compareCLL(Node* head1, Node* head2) {
        if(head1 == NULL || head2 == NULL) return false;
        Node *curr1 = head1, *curr2 = head2;
        
        do{
            if(curr1 -> data != curr2 -> data) return false;
            curr1 = curr1 -> next;
            curr2 = curr2 -> next;
        } while(curr1 != head1 && curr2 != head2);
        return true;
    }
};