class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> hash;
       for(auto c : arr){
        hash[c]++;
       }
        // fq stored in ans
        vector<int> ans;
        for(auto x : hash){
            ans.push_back(x.second);
        }
        sort(ans.begin(),ans.end());

        for(int i = 0;i<ans.size()-1;i++){
            if(ans[i] == ans[i+1]) return false;
        }
    return true;
    }
};