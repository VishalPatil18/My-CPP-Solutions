// My Solution
class Solution {
public:
    vector<int> inorder(TreeNode *root){
        vector<int> arr;
        stack<TreeNode*> stk;
        TreeNode *curr = root;
     
        while(curr || !stk.empty()){
            while(curr){
                stk.push(curr);
                curr = curr -> left;
            }
     
            curr = stk.top();
            stk.pop();
     
            arr.push_back(curr -> val);
            curr = curr -> right;
        }
        return arr;
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v1 = inorder(root1);
        vector<int> v2 = inorder(root2);
        vector<int> ans;
        int m = v1.size(), n = v2.size();
        int i=0, j=0;
        while(i < m && j < n){
            if(v1[i] < v2[j]) ans.push_back(v1[i++]);
            else ans.push_back(v2[j++]);
        }
        while(i < m) ans.push_back(v1[i++]);
        while(j < n) ans.push_back(v2[j++]);
        
        return ans;
    }
};