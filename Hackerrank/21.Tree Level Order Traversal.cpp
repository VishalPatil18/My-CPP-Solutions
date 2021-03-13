/*
    https://www.hackerrank.com/challenges/tree-level-order-traversal/problem
*/

void levelOrder(Node * root) {
    if(root == NULL) return;
    queue<Node*> Q;
    Q.push(root);

    while(!Q.empty()){
        cout << Q.front() -> data << " ";
        if(Q.front() -> left != NULL) Q.push(Q.front() -> left);
        if(Q.front() -> right != NULL) Q.push(Q.front() -> right);
        Q.pop();
    }
    cout << endl;
}