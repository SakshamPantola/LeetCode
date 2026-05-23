class Solution {
public:
    int findLHS(vector<int>& nums) {

        int n = nums.size();
        int MaxSeq = 0;

        sort(nums.begin(),nums.end());
        if(nums[0] == nums[n-1]){
            return 0;
        }
        for(int i = 0;i<n;i++){
        int cnt = 1;
        int min = nums[i];

        bool different = false;
        for(int j = i+1;j<n;j++){


            int max = nums[j];
            if(max-min == 1){
                cnt++;
                different = true;
            }else if(max-min == 0){
                cnt++;
            }else if(max-min>1){
                break;
            }
        }
       if(cnt > 1 && different ) { 
          MaxSeq = max(MaxSeq, cnt);
}
        }  
        return MaxSeq;
    }
};