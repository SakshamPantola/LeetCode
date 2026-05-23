class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2*n);
        for(int i = 0;i<n;i++){
            ans[i] = nums[i];
        }
        int k = 0;
        for(int j=n-1;j>=0;j--){
            ans[n+k] = nums[j];
            k++;
        }
        return ans;
    }
};