/*
    https://www.hackerrank.com/challenges/tree-inorder-traversal/problem
*/

void inOrder(Node *root) {
    if(root == NULL) return;
    if(root -> left == NULL && root -> right == NULL){
        cout << root -> data << " ";
        return;
    }
    else{
        inOrder(root -> left);
        cout << root -> data << " ";
        inOrder(root -> right);
    }
}
