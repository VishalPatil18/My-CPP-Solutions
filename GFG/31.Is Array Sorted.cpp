class Solution{
  public:
    //Complete this function
    int isSorted(int arr[],int n)
    {
        if(n == 1) return 1;
        bool ascending = false;
        if(arr[0] < arr[1]) ascending = true;
        
        if(ascending == true){
            for(int i=1; i<n-1; ++i){
                if(arr[i] > arr[i+1]) return 0;
            }
        }
        else{
            for(int i=1; i<n-1; ++i){
                if(arr[i] < arr[i+1]) return 0;
            }
        }
        return 1;
    }
};