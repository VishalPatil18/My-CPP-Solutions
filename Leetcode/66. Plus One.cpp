// My Solution
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0, i = digits.size()-1;
        do{
            int num = digits[i] + 1;
            carry = 0;
    
            if(num > 9){
                carry = 1;
                num %= 10;
            }
            
            digits[i] = num;
            i--;
        } while(i<digits.size() && carry != 0);
        
        if(carry == 1) digits.insert(digits.begin(), 1);
        
        return digits;
    }
};

// Other SOlutions
vector<int> plusOne(vector<int>& digits) {
    for (int i=digits.size(); i--; digits[i] = 0)
        if (digits[i]++ < 9) return digits;
    digits[0]++;
    digits.push_back(0);
    return digits;
}
