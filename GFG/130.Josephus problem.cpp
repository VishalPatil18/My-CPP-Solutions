// My Solution
class Solution
{
    public:
    int josephus(int n, int k)
    {
        if(n == 1) return 1;
        return ((josephus(n-1, k) + k - 1)%n + 1);
    }
};

// Using List
void Josh(vector<int> person, int k, int index)
{
    if(person.size() == 1) {                // Base case, when only one person is left
        cout << person[0] << endl;
        return;
    }

    index = ((index + k) % person.size());  // find the index of first person which will die
    person.erase(person.begin() + index);   // remove the first person whcih is going to be killed
    Josh(person, k, index);                 // recursive call for n-1 persons
}