multimap<int,int> multimapInsert(int arr[],int n)
{
    multimap<int,int>mp;
    for(int i = 0; i < n; i++) mp.insert({arr[i], i});
    return mp;
}


void multimapDisplay(multimap<int,int>mp)
{
    for(auto x: mp) cout << x.first << " " << x.second << endl;
}


void multimapErase(multimap<int,int>&mp,int x)
{
    if(mp.find(x) != mp.end()){
        mp.erase(x);
        cout << "erased " << x;
    }
    else cout<<"not found";
    
    cout<<endl;
}