/*
    https://www.hackerrank.com/challenges/binary-search-tree-lowest-common-ancestor/problem
*/

Node *lca(Node *root, int v1,int v2) {
	// Write your code here.
    Node *ans = root;
    if(root == NULL) return ans;
    if(v1 < root -> data && v2 > root -> data) return ans;
    else if(v1 < root -> data && v2 < root -> data){
        root = root -> left;
        ans = lca(root, v1, v2);
        return ans;
    }
    else if(v1 > root -> data && v2 > root -> data){
        root = root -> right;
        ans = lca(root, v1, v2);
        return ans;
    }
    return ans;
}
