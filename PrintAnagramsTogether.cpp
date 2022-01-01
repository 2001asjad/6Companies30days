#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        
        for(auto it : string_list){
            string word = it;
            sort(word.begin(), word.end());
            mp[word].push_back(it);
        }
        
        for(auto it: mp){
            ans.push_back(it.second);
        }
        
        return ans;
    }
};