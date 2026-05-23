class Solution {
public:


static bool rtx(pair<int,int> a, pair<int,int> b){
    if(a.first!=b.first){
        return a.first<b.first;
    }
    return a.second>b.second;
}

    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> hash;
        vector<int> ans;
        for(auto x: nums){
            hash[x]++;
        }

        vector<pair<int,int>> frequency;
        for(auto it: hash){
            frequency.push_back({it.second,it.first});
        }

        sort(frequency.begin(),frequency.end(),rtx);

        for(auto p: frequency){
            for(int i=0;i<p.first;i++){
                ans.push_back(p.second);
            }
        }
        
        return ans;
    }
};