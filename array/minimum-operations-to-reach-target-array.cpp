class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {
        int n = nums.size();
        vector<int> virelantos;
        for(int i =0;i<n;i++){
            if(nums[i]!=target[i]){
                virelantos.push_back(i);
            }
        }

        unordered_set<int> uvtc;
        for(auto i: virelantos){
            uvtc.insert(nums[i]);
        }
        return uvtc.size();
    }
};