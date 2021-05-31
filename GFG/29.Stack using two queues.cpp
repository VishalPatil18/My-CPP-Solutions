/* The method push to push element into the stack */
void QueueStack :: push(int x){
    q1.push(x);
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop(){
    if(q1.empty())
        return -1;
    int temp = q1.size()-1;
    while(temp--){
        int temp2 = q1.front(); q1.pop();
        q2.push(temp2);
    }
    int ans = q1.front(); q1.pop();
    while(!q2.empty()){
        int temp2 = q2.front(); q2.pop();
        q1.push(temp2);
    }
    return ans;
}