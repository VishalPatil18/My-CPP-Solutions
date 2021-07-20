// My Solution

//Function to push an integer into the stack1.
void twoStacks :: push1(int x){ if(top1 < top2 - 1) arr[++top1] = x; }
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x) { if(top1 < top2 - 1) arr[--top2] = x; }
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1(){
    int ans = -1;
    if(top1 >= 0) ans = arr[top1--];
    return ans;
}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2(){
    int ans = -1;
    if(top2 < size) ans = arr[top2++];
    return ans;
}