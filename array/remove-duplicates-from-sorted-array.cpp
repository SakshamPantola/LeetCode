class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

            if(nums.size() == 0){
                return 0;
            }

        int n = nums.size();
        int i=0;
        int j = i+1;
        while(i<j && (i<n && j<n)){
        if(nums[i] == nums[j]){
             j++;
        }else{
             i++;
            nums[i] = nums[j]; 
            j++;
             }
        }
        return i+1;
    }
};