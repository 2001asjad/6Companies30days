class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int res = 0;
        int n = arr.size();
        
        for(int i=1; i<n; i++){
            int count = 1;
            bool flag = false;
            int j = i;
            while(j<n and arr[j] > arr[j-1]){
                j++;
                count++;
            }
            while(i!=j and j<n and arr[j] < arr[j-1]){
                j++;
                count++;
                flag = true;
            }
            if(i!=j and flag and count>2){
                res = max(res, count);
                j--;
            }
            i = j;
        }
        
        return res;
    }
};