class Solution {
public:

        vector<vector<int>> permutation;

    void getpermu(vector<int>& nums,int index){
        if(index == nums.size()){
            permutation.push_back(nums);
        }
        for(int i = index;i<nums.size();i++){
            swap(nums[i],nums[index]);
            getpermu(nums,index+1);
            swap(nums[i],nums[index]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        getpermu(nums,0);
        return permutation;
    }
};