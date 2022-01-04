class Solution {
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *res = new int[2];
        
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        
        for(int i=0; i<n; i++){
            if(mp[i+1] > 1) res[0] = i+1;
            if(mp[i+1] == 0) res[1] = i+1;
        }
        
        return res;
    }
};