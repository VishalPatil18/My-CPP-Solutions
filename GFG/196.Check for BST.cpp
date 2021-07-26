// My Solution
class Solution
{
    public:
    bool isBST(Node* root, int min = INT_MIN, int max = INT_MAX) 
    {
        if(root == NULL) return true;
        return (root -> data > min  &&  root -> data <= max &&
                isBST(root -> left, min, root -> data) &&
                isBST(root -> right, root -> data, max));
    }
};
