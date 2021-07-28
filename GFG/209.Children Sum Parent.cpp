// My Solution
int isSumProperty(Node *root)
{
    stack<Node*> stk;
    Node *curr = root;
    while(!stk.empty() || curr != NULL){
        while(curr){
            stk.push(curr);
            curr = curr -> left;
        }
        curr = stk.top();
        stk.pop();
        if(curr -> left || curr -> right){
            int sum = 0;
            if(curr -> left) sum += curr -> left -> data;
            if(curr -> right) sum += curr -> right -> data;
            if(sum != curr -> data) return false;
        }
        
        curr = curr -> right;
    }
    return true;
}