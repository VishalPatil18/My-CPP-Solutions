// My Solution
class Solution
{
    public:
    vector<int> findCommon(Node *root1, Node *root2)
    {
        vector<int> ans;
        
        unordered_set<int> s;
        queue<Node*> q;

        q.push(root1);
        while(!q.empty()){
            Node *temp = q.front();
            if(temp -> left) q.push(temp -> left);
            if(temp -> right) q.push(temp -> right);
            q.pop();
            s.insert(temp -> data);
        }

        q.push(root2);
        while(!q.empty()){
            Node *temp = q.front();
            if(temp -> left) q.push(temp -> left);
            if(temp -> right) q.push(temp -> right);
            q.pop();
            if(s.find(temp -> data) != s.end()) ans.push_back(temp -> data);
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// Using Stacks
class Solution
{
    public:
    //Function to find the nodes that are common in both BST. 
    vector<int> findCommon(Node *root1, Node *root2)
    {
        vector<int> ans;
        stack<Node*> s1, s2;
        while(true){
            // push the Nodes of first tree in stack s1
            if(root1){
                s1.push(root1);
                root1 = root1->left;
            }
      
            // push the Nodes of second tree in stack s2
            else if(root2){
                s2.push(root2);
                root2 = root2->left;
            }
      
            // Both root1 and root2 are NULL here
            else if(!s1.empty() && !s2.empty()){
                root1 = s1.top();
                root2 = s2.top();
      
                // If current keys in two trees are same
                if(root1 -> data == root2 -> data){
                    ans.push_back(root1 -> data);
                    s1.pop(); s2.pop();
                    root1 = root1 -> right;
                    root2 = root2 -> right;
                }
      
                else if(root1 -> data < root2 -> data){
                    s1.pop();
                    root1 = root1 -> right;
      
                    // root2 is set to NULL, because we need new Nodes of tree 1
                    root2 = NULL;
                }
                else if(root1 -> data > root2 -> data){
                    s2.pop();
                    root2 = root2 -> right;
                    root1 = NULL;
                }
            }
      
            // Both roots and both stacks are empty
            else  break;
        }
        return ans;
    }
};
