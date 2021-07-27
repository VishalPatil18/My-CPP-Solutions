// My Solution
class Solution {
public:
    bool findTargetUtil(TreeNode* root, int k, unordered_set<int> &s){
        if(!root) return false;
        if(findTargetUtil(root -> left, k, s)) return true;
        if(s.find(k - (root -> val)) != s.end()) return true;
        s.insert(root -> val);
        return findTargetUtil(root -> right, k, s);
    }
    
    bool findTarget(TreeNode* root, int k){
        unordered_set<int> s;
        return findTargetUtil(root, k, s);
    }
};