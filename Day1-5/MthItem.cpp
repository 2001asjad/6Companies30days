class Solution {
  public:
    int findPosition(int N , int M , int K) {
        // code here
        K+=M-1;
        K=K%N;
        if(!K)
        return N;
        return K;
    }
};