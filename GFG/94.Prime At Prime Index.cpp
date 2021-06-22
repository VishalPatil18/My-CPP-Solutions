// My Solution using Sieve
vector<int> prime_at_prime(vector<int>v)
{
    vector<int> ans;
    int max_ = *max_element(v.begin(), v.end());
    int maxNum = (max_ > v.size()) ? max_ : v.size();
    
    bool arr[maxNum+1];
    for(int i=0; i<maxNum+1; arr[i++] = true);
    
    for (int p=2; p*p<maxNum+1; p++)
        if(arr[p]) for(int i=p*p; i<maxNum+1; i+=p) arr[i] = false;
    
    for(int i=1; i<v.size(); ++i)
        if(arr[i+1] && arr[v[i]]) ans.push_back(v[i]);
    
    return ans;
}

// Other Solution
int prime[100005];
void seive(){
    prime[1]=1;
    for(int i=2;i<=100000;i++)
        if(prime[i]==0) 
            for(int j=i+i;j<=100000;j+=i) prime[j]=1;
}

vector<int> prime_at_prime(vector<int>v){
    vector<int>result;
    for(int i=1;i<=100004;i++) prime[i]=0;
    
    seive();
    
    for(int i=1;i<=v.size();i++)
        if(prime[v[i-1]]==0 && prime[i]==0) result.push_back(v[i-1]);
    
    return result;
}