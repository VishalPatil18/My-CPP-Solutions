class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans = 0;
        if(root == NULL) return ans;
        
        if(root -> val <= high && root -> val >= low) ans += root -> val;
        ans += rangeSumBST(root -> left, low, high);
        ans += rangeSumBST(root -> right, low, high);
        return ans;
    }
};