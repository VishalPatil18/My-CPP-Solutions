class Solution{
  public:
    void binSort(int A[], int N)
    {
       int left_index = -1, right_index = N;
       while(true){
           do{
               left_index++;
           } while(A[left_index] == 0);
           do{
               right_index--;
           } while(A[right_index] == 1);
           if(left_index > right_index) return;
           swap(A[right_index], A[left_index]);
       }
    }
};