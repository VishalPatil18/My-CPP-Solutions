int findCeil(Node* root, int input){ 
    int ans = -1;
    while(root != NULL){
        if(root -> data == input) return input;
        else if(root -> data < input) root = root -> right;
        else{
            ans = root -> data;
            root = root -> left;
        }
    }
    return ans;
} 