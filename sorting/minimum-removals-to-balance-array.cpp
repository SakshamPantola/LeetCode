class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        if(n<2){
            return 0;
        }

        sort(nums.begin(),nums.end());

    int left = 0;
    int right = 0;
    int max_win_size = 0;

    while(right<n){
        if(1LL*nums[right]<= 1LL*nums[left]*k){
            max_win_size = max(max_win_size,-left+right+1);
            right++;
        }
        else{
            left++;
        }
    }

    return n-max_win_size;
    }
};