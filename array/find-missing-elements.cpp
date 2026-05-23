class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        int size = nums.size();
        sort(nums.begin(),nums.end());
        int small = nums[0];
        int large = nums[size-1];

        vector<int> temp;
        for(int i = small;i<=large;i++){
            temp.push_back(i);
        }

        int m = temp.size();
         vector<int> ans;
        for(int i=0;i<m;i++){
        bool found = false;
            for(int j = 0;j<size;j++){
                if(nums[j] == temp[i]){
                    found = true;
                    break;
                }
            }
            if(!found){
                ans.push_back(temp[i]);
            }
        }
        return ans;
    }

};