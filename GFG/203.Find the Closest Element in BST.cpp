// My Solution
class Solution
{
    public:
    int minDiff(Node *root, int K)
    {
        int ans = abs(K - (root -> data));
        while(root != NULL){
            ans = min(abs(K - (root -> data)), ans);
            if(root -> data < K) root = root -> right;
            else root = root -> left;
        }
        return ans;
    }
};