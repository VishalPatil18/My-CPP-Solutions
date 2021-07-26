// My Solution
class Solution {
  public:
    vector<int> printNearNodes(Node *root, int low, int high) {
        vector<int> ans;
        
        queue<Node *> q;
        q.push(root);
        
        while(!q.empty()){
            Node *temp = q.front();
            if(temp -> data <= high && temp -> data >= low){
                ans.push_back(temp -> data);
                if(temp -> left) q.push(temp -> left);
                if(temp -> right) q.push(temp -> right);
            }
            else if(temp -> data > high && temp -> left) q.push(temp -> left);
            else if(temp -> data < low && temp -> right) q.push(temp -> right);
            q.pop();
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// Other SOlution
void find(Node *root, vector<int> &v, int low, int high){
    if(!root) return;
    find(root->left, v, low, high);
    if(root->data>=low && root->data<=high) v.push_back(root->data);
    find(root->right, v, low,high);
}
    
vector<int> printNearNodes(Node *root, int low, int high){
    vector<int> v;
    find(root, v, low, high);
    return v;
}