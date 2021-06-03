// My Solution
/*
    if (a ^ b = c),
    then (a ^ c = b) and (b ^ c = a)
*/
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> arr;
        arr.push_back(first);
        for(int i=0; i<encoded.size(); ++i){
            arr.push_back(encoded[i]^arr[i]);
        }
        return arr;
    }
};
