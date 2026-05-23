class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int low = 0,high = 0;
        int final_win_size = 0;
        int max_freq = 0;
        unordered_map<int,int> hash;

        for(int high = 0;high<nums.size();high++){
            hash[nums[high]]++;

            while(hash[0] > k){
                hash[nums[low]]--;
                low++;
            }   

            final_win_size = max(final_win_size,high-low+1);

        }

     return final_win_size;
    }
};