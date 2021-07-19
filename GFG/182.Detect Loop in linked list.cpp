// My Solution
class Solution
{
    public:
    bool detectLoop(Node* head)
    {
        Node *fast = head, *slow = head;
        while(fast != NULL && fast -> next != NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
            if(fast == slow) return true;
        }
        return false;
    }
};
