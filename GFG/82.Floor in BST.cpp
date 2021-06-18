int floor(Node* root, int key){ 
    int ans = -1;
    while(root != NULL){
        if(root -> data == key) return key;
        else if(root -> data > key) root = root -> left;
        else{
            ans = root -> data;
            root = root -> right;
        }
    }
    return ans;
}