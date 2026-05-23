class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

        int closestsum = 100000;
        for(int i =0;i<n-2;i++){

            int st = i+1;
            int end = n-1;

            while(st<end){
                int sum = nums[i]+nums[st]+nums[end];

                if(abs(target-sum) < abs(target-closestsum)){
                    closestsum = sum;
                }
                if(sum<target){
                    st++;
                }else{
                    end--;
                }
            }

        }

return closestsum;

    }
};