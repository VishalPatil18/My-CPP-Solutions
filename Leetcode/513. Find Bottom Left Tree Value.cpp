// My Solution
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        map<int, vector<int>> mp;
        queue<pair<TreeNode *, int>> q;
        q.push({root, 1});

        while(!q.empty()){
            auto x = q.front();
            TreeNode *curr = x.first;
            int level = x.second;
            mp[level].push_back(curr -> val);

            q.pop();

            if(curr -> left) q.push({curr -> left, level + 1});
            if(curr -> right) q.push({curr -> right, level + 1});
        }
        
        return mp.rbegin()->second[0];    
    }
};

// Other Solution - Recursive DFS
class Solution {
public:
    void findBottomLeftValue(TreeNode* root, int& maxDepth, int& leftVal, int depth) {
        if(root == NULL) return;
        
        findBottomLeftValue(root->left, maxDepth, leftVal, depth+1);
        findBottomLeftValue(root->right, maxDepth, leftVal, depth+1);
        
        if(depth > maxDepth){ maxDepth = depth; leftVal = root->val; }
    }
    
    int findBottomLeftValue(TreeNode* root) {
        int maxDepth = 0;
        int leftVal = root->val;
        findBottomLeftValue(root, maxDepth, leftVal, 0);
        return leftVal;
    }
};

// Recursive DFS Method 2
class Solution {
public:
    int findBottomLeftValue(TreeNode* root){
        int bottomLeft = 0, height = 0;
        dfs(root, 1, height, bottomLeft);
        return bottomLeft;
    }

private:
    void dfs(TreeNode* node, int depth, int& height, int& res){
        if(!node) return;
        if(depth > height){
            res = node->val;
            height = depth;
        }
        dfs(node->left, depth + 1, height, res);
        dfs(node->right, depth + 1, height, res);
    }
};