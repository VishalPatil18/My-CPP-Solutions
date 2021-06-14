class Solution{
    public:
    bool isCircular(Node * head)
    {
        if(head -> next == head) return true;
        else if(head -> next == NULL) return false;
        
        Node *curr = head -> next;
        while(curr -> next != NULL){
            if(curr -> next == head) return true;
            curr = curr -> next;
            if(curr -> next == NULL) return false;
        }
        return false;
    }
};