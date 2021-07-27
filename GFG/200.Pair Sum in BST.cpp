// My Solution
bool findPairUtil(Node *root, int X, unordered_set<int> &s){
    if(root == NULL) return false;
    if(findPairUtil(root -> left, X, s)) return true;
    if(s.find(X - (root -> data)) != s.end()) return true;
    s.insert(root -> data);
    return findPairUtil(root -> right, X, s);
}

bool findPair(Node* root, int X) 
{
    unordered_set<int> s;
    return findPairUtil(root, X, s);
}