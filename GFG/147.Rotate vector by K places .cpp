// My Solution
vector<int> leftRotate(vector<int> vec, int K)
{
    reverse(vec.begin(), vec.begin()+K);
    reverse(vec.begin()+K, vec.end());
    reverse(vec.begin(), vec.end());
    return vec;
}