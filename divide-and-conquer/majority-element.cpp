class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();

        int n = (size/2);

        for(int i = 0;i<size;i++){
            int cnt = 1;
            for(int j = i+1;j<size;j++){
                if(nums[i] == nums[j]){
                    cnt++;
                }
            }
            if(cnt>n){
                return nums[i];
            }
        }
        return -1;
    }
};