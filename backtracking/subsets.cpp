class Solution {
public:
        vector<vector<int>> finalsub;
        void allsub(vector<int>& nums,vector<int> ans,int index){
            if(nums.size() == index){
                finalsub.push_back(ans);
                return;
            }
            ans.push_back(nums[index]);
            allsub(nums,ans,index+1);
            ans.pop_back();
            allsub(nums,ans,index+1);

        }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        allsub(nums,ans,0);
        return finalsub;   
    }
};