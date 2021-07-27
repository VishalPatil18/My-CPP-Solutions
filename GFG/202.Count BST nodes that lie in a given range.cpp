// My Solution
int getCount(Node *root, int l, int h)
{
    int ans = 0;
    if(root == NULL) return ans;
    if(root -> data > l) ans += getCount(root -> left, l, h);
    if((root -> data <= h) && (root -> data >= l)) ans++;
    return ans + ((root -> data < h) ? getCount(root -> right, l, h) : 0);
}