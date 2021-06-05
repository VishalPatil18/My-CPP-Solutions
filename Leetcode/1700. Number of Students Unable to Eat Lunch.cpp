// My Solution
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int ans = 0;
        queue<int> studentsQueue, sandwichesQueue;
        for(int x : students) studentsQueue.push(x);
        for(int x : sandwiches) sandwichesQueue.push(x);
        
        int count = 0;
        while(sandwichesQueue.size() > 0 && count < sandwichesQueue.size()){
            if(studentsQueue.front() == sandwichesQueue.front()){
                studentsQueue.pop();
                sandwichesQueue.pop();
                count = 0;
            }
            else {
                int x = studentsQueue.front();
                studentsQueue.pop();
                studentsQueue.push(x);
                count++;
            }
        }
        if(count == sandwichesQueue.size()) return studentsQueue.size();
        return ans;
    }
};

// Optimised Solution
int countStudents(vector<int>& A, vector<int>& B) {
    int count[] = {0, 0}, n = A.size(), k;
    
    for (int a : A) count[a]++;

    for (k = 0; k < n && count[B[k]] > 0; ++k) count[B[k]]--;
    
    return n - k;
}