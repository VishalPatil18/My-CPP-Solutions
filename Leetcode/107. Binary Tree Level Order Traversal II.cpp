// My Solution
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        
        if(!root) return ans;
        
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
        
        for(auto i=mp.rbegin(); i!=mp.rend(); ++i) ans.push_back(i -> second);

        return ans;   
    }
};