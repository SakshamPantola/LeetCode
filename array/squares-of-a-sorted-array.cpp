class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
            int n = nums.size();
            vector<int> ans(n);
            int right = n-1;
            int left = 0;
            for(int i=0;i<n;i++){
                if(abs(nums[left])<abs(nums[right])){
                    ans[n-i-1]= nums[right]*nums[right];
                    right--;
                }else{
                    ans[n-i-1] = nums[left]*nums[left];
                    left++;
                }
            }
            return ans;
    }
};