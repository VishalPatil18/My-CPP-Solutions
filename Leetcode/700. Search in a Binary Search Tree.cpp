// My Solution
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode *curr = root;
        while(curr){
            if(curr -> val == val) return curr;
            else if(curr -> val < val) curr = curr -> right;
            else curr = curr -> left;
        }
        return NULL;
    }
};

// My Solution - Using Recursion
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL) return NULL;
        if(root -> val == val) return root;
        
        if(root -> val < val) return searchBST(root -> right, val);
        return searchBST(root -> left, val);
    }
};