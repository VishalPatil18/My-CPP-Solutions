Node* insert(Node* root, int Key){
    Node *temp = root, *parent = NULL;
    
    while(temp != NULL){
        parent = temp;
        if(temp -> data == Key) return root;
        else if(temp -> data < Key) temp = temp -> right;
        else if(temp -> data > Key) temp = temp -> left;
    }

    if(parent -> data < Key) parent -> right = new Node(Key);
    else parent -> left = new Node(Key);
    
    return root;
}