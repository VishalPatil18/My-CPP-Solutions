// My Solution
class Solution{
    public:
    void merge(long long arr1[], long long arr2[], int n, int m) 
    { 
        int i = 0;
        while(i < n){
            if(arr1[i] >= arr2[0]){
                swap(arr1[i], arr2[0]);
                int x = 0;
                while(x < m-1 && arr2[x] > arr2[x + 1]){
                    swap(arr2[x], arr2[x + 1]);
                    x++;
                }
            }
            i++;
        }
    }
};

// Other Solution
void merge(int arr1[], int arr2[], int n, int m)
{
    int x = n-1, y = 0;
    while(x >= 0 && y < m){ 
        if(arr1[x] > arr2[y]) swap(arr1[x] , arr2[y++]);
        x--;
    }
    sort(arr1 , arr1 + n);
    sort(arr2 , arr2 + m);
}