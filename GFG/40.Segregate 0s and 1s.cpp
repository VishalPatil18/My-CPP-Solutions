class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        int low = -1, high = n;
        
        while(true){
            do {
                low++;
            } while(arr[low] == 0);
            
            do {
                high--;
            } while(arr[high] == 1);
            
            if(low > high) return;
            
            swap(arr[low], arr[high]);
        }
    }
};