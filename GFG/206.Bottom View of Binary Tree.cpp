// My Solution
class Solution {
    public:
    vector<int> bottomView(Node *root)
    {
        vector<int> ans;
        map<int, vector<int>> mp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        
        while(!q.empty()){
            auto x = q.front();
            Node *curr = x.first;
            int hd = x.second;
            
            mp[hd].push_back(curr -> data);
            if(curr -> left) q.push({curr -> left, hd - 1});
            if(curr -> right) q.push({curr -> right, hd + 1});
            q.pop();
        }
        for(auto x : mp){
            vector<int> v = x.second;
            ans.push_back(v.back());
        }
        
        return ans;           
    }
};