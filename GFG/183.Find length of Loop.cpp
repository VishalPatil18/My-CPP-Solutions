// My Solution
int countNodesinLoop(struct Node *head)
{
    Node *fast = head, *slow = head;
    while(fast != NULL && fast -> next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
        if(fast == slow) break;
    }
    if(fast != slow) return 0;
    
    slow = head;
    while(fast != slow){
        fast = fast -> next;
        slow = slow -> next;
    }
    Node *start = fast;
    fast = fast -> next;
    int ans = 1;
    while(fast != start){ fast = fast -> next; ans++; }
    return ans;
}

// Using Hashing
int countNodesinLoop(struct Node *head)
{
    unordered_map<Node *, int> mp;
    Node *temp = head;
    int pos = 1;
    while(temp){
        if(mp[temp]) return pos - mp[temp];
        mp[temp] = pos++;
        temp = temp -> next;
    }
    return 0;
}