// My Solution
class Solution{
    public:
    vector<vector<int>> separateChaining(int hashSize,int arr[],int sizeOfArray)
    {
        vector<vector<int>> hashTable(hashSize);
        for(int i=0; i<sizeOfArray; i++) hashTable[arr[i]%hashSize].push_back(arr[i]);
        
        return hashTable;
    }
};