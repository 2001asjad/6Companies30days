#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long prod = 1;
        int result = 0;
        
        int left = 0;
        int right = 0;
        
        while(right<n){
            prod *= a[right];
            
            while(prod >= k){
                prod = prod/a[left];
                left++;
            }
            
            result += right-left+1;
            right++;
        }
        
        return result;
    }
};