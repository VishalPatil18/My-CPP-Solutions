// My Solution
class Solution{
    public:
    vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
    { 
        vector<int> ans;
        int i=0, j=0, prev = -1;
        while(i < N && j < M){
            if(arr1[i] == arr2[j]){
                if(arr1[i] != prev && arr2[j] != prev){
                    ans.push_back(arr1[i]);
                    prev = arr1[i];
                }
                i++, j++;
            }
            else if(arr1[i] < arr2[j]){
                prev = arr1[i];
                i++;
            }
            else if(arr1[i] > arr2[j]){
                prev = arr2[j];
                j++;
            }
        }
        
        return ans;
    }

};