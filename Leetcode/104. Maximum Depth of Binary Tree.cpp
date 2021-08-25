 // My Solution
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        int lh = maxDepth(root -> left);
        int rh = maxDepth(root -> right);
        return 1 + max(lh, rh);
    }
};

// My Other Solution
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        return 1 + max(maxDepth(root -> left), maxDepth(root -> right));
    }
};