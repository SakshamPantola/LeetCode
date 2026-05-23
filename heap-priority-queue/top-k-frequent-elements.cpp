class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int> count;

        for(auto it: nums){
            count[it]++;
        }

        vector<pair<int,int>> freq;

        for(auto x: count){
            freq.push_back({x.second,x.first});
        }

        sort(freq.rbegin(),freq.rend());

        for(int i = 0;i<k;i++){
            ans.push_back(freq[i].second);
        }   
        return ans;

    }
};