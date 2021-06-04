// My Solution - O(max(45, (highLimit - lowLimit)))
class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int ans = 0;
        int boxes[46] = {0};
        for(int i=lowLimit; i<=highLimit; ++i){
            int sumDigits = 0;
            int temp = i;
            while(temp > 0){
                sumDigits += temp % 10;
                temp /= 10;
            }
            boxes[sumDigits]++;
        }
        
        for(int i=0; i<46; ++i)
            if(boxes[i] > ans) ans = boxes[i];
        
        return ans;
    }
};

// Optimised Solution
class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
    int table[46] = {0}, digits[6], k = lowLimit, sum = 0, answer = 0;

    for(int i = 5; i >= 0; i--, k /= 10){
        digits[i] = k % 10;         
        sum += digits[i];               // calculate sum for lowLimit and fetch all digits 
    }

    while(lowLimit <= highLimit){
        while(lowLimit <= highLimit && digits[5] != 10)   // increasing for number for boxes
            table[sum++]++, digits[5]++, lowLimit++;

        for(int i = 5; i >= 0 && digits[i] == 10;i--)     // transform digits and recalculate sum
            digits[i] = 0, digits[i-1]++, sum -= 9;
    }

    for(int i = 0; i != 46; i++) answer = max(answer, table[i]);

    return answer;
    }
};