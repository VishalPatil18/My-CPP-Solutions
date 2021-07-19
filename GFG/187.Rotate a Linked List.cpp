// My Solution
class Solution
{
    public:
    Node* rotate(Node* head, int k)
    {
        if(head == NULL || head -> next == NULL) return head;
        
        Node *temp = head, *lastNode = head;
        int size = 1;
        while(temp -> next != NULL){ temp = temp -> next; size++; }
        lastNode = temp;
        
        temp = head;
        int x = k % size;
        while(x--){ 
            Node *temp = head;
            head = temp -> next;
            lastNode -> next = temp;
            lastNode = lastNode -> next;
            temp -> next = NULL;
        }
        
        return head;
    }
};