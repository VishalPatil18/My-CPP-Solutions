// My Solution
int verticalWidth(Node* root)
{
    if(root == NULL) return 0;
    
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
    
    return mp.size();
}

// Other Solution
void lengthUtil(Node* root, int &maximum, int &minimum, int curr=0)
{
    if(root == NULL) return;

    lengthUtil(root->left, maximum, minimum, curr - 1);
    
    if(minimum > curr) minimum = curr;
    if(maximum < curr) maximum = curr;
    
    lengthUtil(root->right, maximum, minimum,  curr + 1);
}
  
int getLength(Node* root)
{
    int maximum = 0, minimum = 0;
    lengthUtil(root, maximum, minimum, 0);
  
    return (abs(minimum) + maximum) + 1;
}