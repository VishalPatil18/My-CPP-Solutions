// My Solution
class Solution
{
    public:
    void deleteNode(Node *del)
    {
        Node *toDelete = del -> next;
        del -> data = toDelete -> data;
        del -> next = toDelete -> next;
        delete(toDelete);
    }
};