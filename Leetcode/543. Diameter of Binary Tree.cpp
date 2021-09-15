// My SOlution
class Solution {
public:
    int solve(TreeNode *root, int &res){
        if(root == NULL) return 0;
        
        int l = solve(root -> left, res);
        int r = solve(root -> right, res);
        
        res = max(res, l+r);
        return max(l, r)+1;
    }
    
    int diameterOfBinaryTree(TreeNode* root){
        int res = 0;
        int temp = solve(root, res);
        return res;
    }
};