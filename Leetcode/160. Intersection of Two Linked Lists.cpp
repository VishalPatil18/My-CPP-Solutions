// My Solution - O(n*m)
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return NULL;
        if(headA == headB) return headA;
        
        ListNode *currA = headA, *currB = headB;
        currA = headA;
        currB = headB;
        while(currA != NULL){
            currB = headB;
            while(currB != NULL){
                if(currA == currB) return currA;
                currB = currB -> next;
            }
            currA = currA -> next;
        }
        return NULL;
    }
};

// Optimized Solution
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
{
    ListNode *p1 = headA;
    ListNode *p2 = headB;
        
    if (p1 == NULL || p2 == NULL) return NULL;

    while (p1 != NULL && p2 != NULL && p1 != p2) {
        p1 = p1->next;
        p2 = p2->next;

        // Any time they collide or reach end together without colliding then return any one of the pointers.
        if (p1 == p2) return p1;

        // If one of them reaches the end earlier then reuse it by moving it to the beginning of other list. Once both of them go through reassigning, they will be equidistant from the collision point.
        if (p1 == NULL) p1 = headB;
        if (p2 == NULL) p2 = headA;
    }
        
    return p1;
}

// Similar Logic less lines of code
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *cur1 = headA, *cur2 = headB;
    while(cur1 != cur2){
        cur1 = cur1?cur1->next:headB;
        cur2 = cur2?cur2->next:headA;
    }
    return cur1;
}

// Using XOR - https://leetcode.com/problems/intersection-of-two-linked-lists/discuss/49899/C%2B%2B-solution-using-XOR-trick
class Solution {
    uintptr_t acc = 0;

    ListNode* reverse(ListNode *head) {
        ListNode *prev = nullptr, *tmp;
        while (head) {
            acc ^= reinterpret_cast<uintptr_t> (head);
            tmp = head->next;
            head->next = prev;
            prev = head;
            head = tmp;
        }
        return prev;
    }
    
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p = headA, *q = headB;
        p = reverse(p);
        q = reverse(q);
        p = reverse(p);
        if (q != headA) q = reverse(q);
        return reinterpret_cast<ListNode*> (acc);
    }
};