class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2) return nums.size();
        int st=2;
        int end = 2;
        while(end<nums.size()){
            if(nums[end] != nums[st-2]){ nums[st] = nums[end]; st++;}
            end++;
        }
        return st;
    }
};