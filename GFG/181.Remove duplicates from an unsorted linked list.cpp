// My Solution
class Solution
{
    public:
    Node * removeDuplicates( Node *head) 
    {
        unordered_set<int> hash;
        Node *temp = head, *prev = NULL;
        while(temp != NULL){
            if(hash.find(temp -> data) != hash.end()){
                // delete this node;
                prev -> next = temp -> next;
                delete(temp);
                temp = prev;
            }
            else{
                hash.insert(temp -> data);
                prev = temp;
            }
            temp = temp -> next;
        }
        return head;
    }
};