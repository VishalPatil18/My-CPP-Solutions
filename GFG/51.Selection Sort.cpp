class Solution
{
    public:
    int select(int arr[], int i)
    {
        int select = i;
        for(int j=i-1; j>=0; j--)
            if(arr[select] < arr[j]) select = j;
        
        return select;
    }
     
    void selectionSort(int arr[], int n)
    {
        int selected, temp;
        for(int i=n-1; i>=1; --i){
            selected = select(arr, i);
            temp = arr[i];
            arr[i] = arr[selected];
            arr[selected] = temp;
        }
    }
};