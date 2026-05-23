class Solution {
public:
    
    vector<vector<int>> final_ans;

    void getall(vector<int> &nums,int i,vector<int> &ans){
        if(i == nums.size()){
            final_ans.push_back(ans);
            return;
        }
         ans.push_back(nums[i]);
        getall(nums,i+1,ans);
       ans.pop_back();

        int index = i+1;
        while(index<nums.size() && nums[index] == nums[index-1]){
            index++;
        }
        getall(nums,index,ans);

        

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        getall(nums,0,ans);
        return final_ans;
    }
};