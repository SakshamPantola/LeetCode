class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
      int left = 0;
      int right = 0;
      int total_sum = 0;
       
       for(auto x: nums){
        total_sum+=x;
       }
        
        for(int i = 0;i<n;i++){
           
            right = total_sum-nums[i]-left;
            if(right == left) return i;
             left+=nums[i];
        }
return -1;
    }
};