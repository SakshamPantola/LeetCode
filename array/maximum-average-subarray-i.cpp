class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int big=INT_MIN;
        int sum=0;
        while(j<nums.size()){
            sum = sum+nums[j];
            if(j-i+1<k){
                j++;
            }else if(j-i+1 == k){
                 big = max(big,sum);
                sum = sum-nums[i];
                i++;
                j++;

            }
          
        }
        return (double)big/k;
    }
};