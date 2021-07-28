// My Solution
class Solution{
    public:
    vector<int> InOrder(Node *root){
        vector<int> ans;
        if(root == NULL) return ans;
        ans = InOrder(root -> left);
        ans.push_back(root -> data);
        vector<int> temp = InOrder(root -> right);
        ans.insert(ans.end(), temp.begin(), temp.end());
        return ans;
    }
        
    bool isIdentical(Node *r1, Node *r2){
        vector<int> tree1 = InOrder(r1);
        vector<int> tree2 = InOrder(r2);
        if(tree1 == tree2) return true;
        else return false;
    }
}

// Other SOlution - Recursive
class Solution{
    public:
    bool isIdentical(Node *x, Node *y){
        if(!x && !y) return true;
        return ((x && y) && (x -> data == y -> data) &&
                isIdentical(x -> left, y -> left)  &&
                isIdentical(x -> right, y -> right));
    }
};