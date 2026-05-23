class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a = nums.size();
        return max({1LL*nums[0]*nums[1]*100000 ,

                    1LL*nums[a-1]*nums[a-2]*100000,
                   1LL*nums[a-1]*nums[a-2]*(-100000)
                    , 1LL*nums[0]*nums[1]*(-100000),
                   1LL*nums[0]*nums[a-1]*(-100000)});
    }
};