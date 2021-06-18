Node *deleteNode(Node *root,  int X){
    if(root == NULL) return root;
    
    if(root -> data < X) root->right = deleteNode(root->right, X);
    else if(root -> data > X) root->left = deleteNode(root->left, X);
    else{
        Node *temp1 = root, *temp2 = root;
        
        while(temp1 -> right != NULL) temp1 = temp1 -> right;
        
        if(temp1==root) return NULL;
        
        while(temp2->right != temp1 && temp2->right != NULL) temp2 = temp2 -> right;
        
        root -> data = temp1 -> data;
        temp2 -> right = NULL;
    }
    return root;
}
