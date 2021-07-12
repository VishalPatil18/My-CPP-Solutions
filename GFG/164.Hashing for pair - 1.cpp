// My Solution
int sumExists(int arr[], int N, int sum)
{
    unordered_set<int> hash(arr, arr+N);

    for(int i=0; i<N; i++){
        int toFind = sum - arr[i];
        
        if(arr[i] != toFind && hash.find(toFind) != hash.end()) return true;
    }
    return false;
}