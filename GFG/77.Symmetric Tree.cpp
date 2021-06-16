// My SOlution - Time O(N) Space O(h)
vector<int> makeVector(Node *root, bool first){
    vector<int> ans;
    if(root == NULL) return ans;
    
    vector<int> left = makeVector(root -> left, false);
    vector<int> right = makeVector(root -> right, false);
    
    for(int i=0; i<left.size(); ++i) ans.push_back(left[i]);
    
    if(first) ans.push_back(-1);
    else ans.push_back(root -> data);
    
    for(int i=0; i<right.size(); ++i) ans.push_back(right[i]);
    
    return ans;
}

bool isSymmetric(struct Node* root)
{
    vector<int> arr = makeVector(root, true);
    int low = 0, high = arr.size()-1;
    while(low <= high){
        if(arr[low] != arr[high]) return false;
        low++, high--;
    }
    return true;
}

// Others Solutions - Time O(N) Space O(h)
bool find(Node *l,Node *r){
    if((l&& !r) || (l && !r)) return false;
    if(!l && !r) return true;
    if(l->key != r->key) return false;

    return (find(l->left, r->right) && find(l->right, r->left));
}

bool isSymmetric(struct Node* root)
{
    if(root) return find(root->left,root->right);
    return NULL;
}

// Other Solution - Time O(N) Space O(h)
bool isMirror(Node *root1, Node *root2){
    if(root1 == NULL && root2 == NULL) return true;
    if(root1 != NULL && root2 != NULL && root1->data == root2->data)
        return (isMirror(root1->right, root2->left) && isMirror(root1->left, root2->right));
    return false;
}

bool isSymmetric(struct Node* root)
{
    return isMirror(root, root);
}