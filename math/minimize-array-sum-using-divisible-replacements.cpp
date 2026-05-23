class Solution {
public:
    long long minArraySum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
      vector<int> exis(1000001,0);
        long long sum = 0;
        
        for(auto x: nums){
            int best = x;
       for(int i = 1;i*i<=x;i++){
           if(x%i == 0){
               if(exis[i]){
                   best = min(best,i);
               }if(exis[x/i]){
                   best = min(best,x/i);    
                   }
               }
       }
           sum+=best;
           exis[x] = 1;
           }
       return sum;
    }
};