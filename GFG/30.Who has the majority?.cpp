class Solution{
  public:
    // Function to find element with more appearances between two elements in an
    // array.
    int majorityWins(int arr[], int n, int x, int y) {
        int freqx = 0, freqy = 0;
        
        for(int i=0; i<n; i++){
            if(arr[i] == x) freqx++;
            else if(arr[i] == y) freqy++;
        }
        if(freqx == freqy){
            if(x < y) return x;
            else return y;
        }
        else if(freqx > freqy) return x;
        else return y;
    }
};
