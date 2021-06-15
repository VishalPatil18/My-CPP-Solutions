queue<int> modifyQueue(queue<int> q, int k)
{
    //add code here.
    stack<int> stk;
    for(int i=0; i<k; ++i){
        stk.push(q.front());
        q.pop();
    }
    while(!stk.empty()){
        q.push(stk.top());
        stk.pop();
    }
    for(int i=0; i<q.size()-k; ++i){
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
    return q;
}