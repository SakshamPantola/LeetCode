class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sign = -1;

        int n = nums.size();
        int sum = 0;
        for(int i = 0;i<n;i++){
            sign = sign*(-1);
            sum = sum+nums[i]*sign;
        }
        return sum;
    }
};