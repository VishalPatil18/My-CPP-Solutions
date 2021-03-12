/*
    https://www.hackerrank.com/challenges/tree-postorder-traversal/problem
*/

void postOrder(Node *root) {
    Node* temp = root;
    if(temp == NULL)
        return;
    postOrder(temp -> left);
    postOrder(temp -> right);
    std::cout << root -> data << " ";
}
