vector<string> findMatchedWords(vector<string> dict,string pattern)
{
    vector<string> ans;
    
    int count = 1;
    string encoded_string = "";
    for(int i=1; i<pattern.length(); ++i){
        if(pattern[i] == pattern[i-1]) count++;
        else {
            encoded_string += to_string(count);
            count = 1;
        }
    }
    encoded_string += to_string(count);
    
    for(int i=0; i<dict.size(); ++i){
        int count2 = 1;
        string encoded_string2 = "";
        for(int j=1; j<dict[i].length(); ++j){
            if(dict[i][j] == dict[i][j-1]) count2++;
            else {
                encoded_string2 += to_string(count2);
                count2 = 1;
            }
        }
        encoded_string2 += to_string(count2);
        if(encoded_string2 == encoded_string) ans.push_back(dict[i]);
    }
    return ans;
}