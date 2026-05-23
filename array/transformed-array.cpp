class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> result(nums.size());
        int n = result.size();
        for(int i = 0;i<result.size();i++){
            if(nums[i]==0){
                result[i] = nums[i];
            }else{
                int idx = ( i+ (nums[i] % n) +n) %n;
                result[i] = nums[idx];
            }
        }
        return result;
    }
};