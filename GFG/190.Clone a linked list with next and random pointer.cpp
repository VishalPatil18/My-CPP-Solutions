// My Solution
class Solution
{
    public:
    Node *copyList(Node *head)
    {
        if(head == NULL) return head;
        
        Node *curr = head;
        while(curr != NULL){
            Node *next = curr -> next;
            curr -> next = new Node(curr -> data);
            curr -> next -> next = next;
            curr = next;
        }
    
        curr = head;
        while(curr != NULL){
            if(curr -> arb == NULL) curr -> next -> arb = NULL;
            else curr -> next -> arb = curr -> arb -> next;
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