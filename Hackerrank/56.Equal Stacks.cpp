/*
    https://www.hackerrank.com/challenges/equal-stacks/problem
*/

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    int maxLength, ans=0;
    (h2.size() > h1.size()) ?
    (
    	(h2.size() > h3.size()) ? maxLength = h2.size() :
		((h3.size() > h1.size()) ? maxLength = h3.size() : maxLength = h1.size())
	) :
	((h3.size() > h1.size()) ? maxLength = h3.size() : maxLength = h1.size());
    
    int sum1 = accumulate(h1.begin(), h1.end(), 0);
    int sum2 = accumulate(h2.begin(), h2.end(), 0);
    int sum3 = accumulate(h3.begin(), h3.end(), 0);
    
    int h1_index = 0, h2_index = 0, h3_index = 0;
    for(int i=0; i<maxLength; ++i) {
        int minSum;
        (sum1 < sum2) ?
        ((sum1 < sum3) ? minSum = sum1 :((sum2 < sum3) ? minSum = sum2 : minSum = sum3)):
        ((sum2 < sum3) ? minSum = sum2 : minSum = sum3);
    
        if((sum1 == sum2) && (sum2 == sum3)) return sum1;
        
        if(sum1 != minSum) sum1 -= h1[h1_index++];
        if(sum2 != minSum) sum2 -= h2[h2_index++];
        if(sum3 != minSum) sum3 -= h3[h3_index++];
    }
    
    return ans;
}