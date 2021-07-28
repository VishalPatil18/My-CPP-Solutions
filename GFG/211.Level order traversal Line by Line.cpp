// My Solution
vector<vector<int>> levelOrder(Node* node)
{
    vector<vector<int>> ans;
    map<int, vector<int>> mp;
    queue<pair<Node *, int>> q;
    q.push({node, 1});
    
    while(!q.empty()){
        auto x = q.front();
        Node *curr = x.first;
        int level = x.second;
        mp[level].push_back(curr -> data);
        
        q.pop();
        
        if(curr -> left) q.push({curr -> left, level + 1});
        if(curr -> right) q.push({curr -> right, level + 1});
    }
    for(auto x : mp) ans.push_back(x.second);
    
    return ans;
}