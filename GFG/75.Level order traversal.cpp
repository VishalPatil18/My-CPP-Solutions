class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    queue<Node *> toDo;
    vector<int> levelOrder(Node* node)
    {
        vector<int> ans;
        if(node == NULL) return ans;
        
        queue<Node *> Q;
        Q.push(node);
    
        while(!Q.empty()){
            Node *current = Q.front();
            ans.push_back(current -> data);
            if(current -> left != NULL) Q.push(current -> left);
            if(current -> right != NULL) Q.push(current -> right);
            Q.pop();
        }
        return ans;
    }
};