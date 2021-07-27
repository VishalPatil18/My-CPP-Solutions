// My Solution - Brute Force
class Solution
{
    public:
    vector<int> inorder(Node *root){
        vector<int> v;
        stack<Node *> s;
        Node *curr = root;
     
        while(curr != NULL || !s.empty()){
            while(curr){
                s.push(curr);
                curr = curr -> left;
            }
     
            curr = s.top();
            s.pop();
     
            v.push_back(curr -> data);
            curr = curr -> right;
        }
        return v;
    }
    
    vector<int> merge(Node *root1, Node *root2)
    {
        vector<int> v1 = inorder(root1);
        vector<int> v2 = inorder(root2);
        vector<int> ans;
        int m = v1.size(), n = v2.size();
        int i=0, j=0;
        while(i < m && j < n){
            if(v1[i] < v2[j]) ans.push_back(v1[i++]);
            else if(v1[i] >= v2[j]) ans.push_back(v2[j++]);
        }
        while(i < m) ans.push_back(v1[i++]);
        while(j < n) ans.push_back(v2[j++]);
        
        return ans;
    }
};

// Other Solutions - Using Two Stack
/* The idea is to use iterative inorder traversal. We use two auxiliary stacks for two BSTs.
Since we need to print the elements in the sorted form, whenever we get a smaller element from any of the trees, we print it.
If the element is greater, then we push it back to stack for the next iteration. */
void merge(node *root1, node *root2) 
{ 
    stack<Node *> s1, s2;   // s1 is stack to hold nodes of first BST and s2 for second BST

    Node *current1 = root1, *current2 = root2;

    // Run the loop while there are nodes not yet printed. The nodes may be in stack(explored, but not printed) or may be not yet explored 
    while(current1 != NULL || !s1.empty() || current2 != NULL || !s2.empty()){ 
        // Following steps follow iterative Inorder Traversal 
        if(current1 != NULL || current2 != NULL){ 
            // Reach the leftmost node of both BSTs and push ancestors of leftmost nodes to stack s1 and s2 respectively 
            if(current1 != NULL){ push(&s1, current1); current1 = current1 -> left; }
            if(current2 != NULL){ push(&s2, current2); current2 = current2 -> left; }
        } else { 
            // If we reach a NULL node and either of the stacks is empty, then one tree is exhausted, print the other tree 
            if(isEmpty(s1)){ 
                while(!isEmpty(s2)){ 
                    current2 = pop(&s2); 
                    current2 -> left = NULL;
                    inorder(current2); 
                }
                return; 
            }
            if(isEmpty(s2)){ 
                while(!isEmpty(s1)){ 
                    current1 = pop (&s1); 
                    current1->left = NULL; 
                    inorder(current1); 
                } 
                return; 
            } 

            // Pop an element from both stacks and compare the popped elements 
            current1 = pop(&s1);
            current2 = pop(&s2);

            // If element of first tree is smaller, then print it and push the right subtree. If the element is larger, then we push it back to the corresponding stack. 
            if(current1->data < current2->data){ 
                cout<<current1->data<<" "; 
                current1 = current1->right; 
                push(&s2, current2); 
                current2 = NULL; 
            } else { 
                cout<<current2->data<<" "; 
                current2 = current2->right; 
                push(&s1, current1); 
                current1 = NULL; 
            } 
        } 
    } 
} 