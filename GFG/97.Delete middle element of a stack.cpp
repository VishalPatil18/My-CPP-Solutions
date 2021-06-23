class Solution
{
    public:
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int middle = ceil(sizeOfStack/2);
        stack<int> topElements;
        for(int i=0; i<sizeOfStack; ++i){
            if(i != middle) topElements.push(s.top());
            s.pop();
        }
        
        while(!topElements.empty()){
            s.push(topElements.top());
            topElements.pop();
        }
    }
};