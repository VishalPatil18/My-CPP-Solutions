class Solution{
  public:
    int majorityElement(int a[], int size)
    {
        int hash[1000001] = {0};
        int x = size/2;
        for(int i=0; i<size; hash[a[i++]]++);
        
        for(int i=0; i<1000001; i++){
            if(hash[i] > x) return i;
        }
        return -1;
    }
};