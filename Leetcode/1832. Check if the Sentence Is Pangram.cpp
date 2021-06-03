// My Solution
class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26] = {0};
        for(int i=0; i<sentence.length(); ++i){
            arr[sentence[i]-97]++;
        }
        for(int i=0; i<26; ++i){
            if(arr[i] == 0) return false;
        }
        return true;
    }
};

// Optimised Solution
bool checkIfPangram(string s) {
    return set<char>(s.begin(), s.end()).size() == 26;
}
