/*
    https://www.hackerrank.com/challenges/tree-preorder-traversal/problem
*/

void preOrder(Node *root) {
    Node* temp = root;
    
    if(temp == NULL) return;
    
    std::cout << root -> data << " ";
    
    preOrder(temp -> left);
    preOrder(temp -> right);
}