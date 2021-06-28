// My Solution
class Solution {
public:
    int reverse(int x) {
        long long int ans = 0, temp;
        if(x < 0) temp = abs(x);
        else temp = x;
        
        while(temp > 0){
            int digit = temp % 10;
            temp /= 10;
            ans = ans*10 + digit;
            if(ans > (pow(2, 31) - 1)) return 0;
        }
        
        if(x < 0) ans *= -1;
        return ans;
    }
};

// Others Solutions 
class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x){
            int temp = ans * 10 + x % 10;
            if(temp / 10 != ans) return 0;
            ans = temp;
            x /= 10;
        }
        return ans;
    }
};