// My Solution
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sumDigits = 0, mulDigits = 1;
        while(n > 0){
            int digit = n%10;
            sumDigits += digit;
            mulDigits *= digit;
            n /= 10;
        }
        return mulDigits - sumDigits;
    }
};

