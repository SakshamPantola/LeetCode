class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        int size = nums.size();
            vector<int> x(n);
            vector<int> y(n);
            for(int i=0;i<n;i++){
                x[i] = nums[i];
            }
                int k = 0;
             for(int i=n;i<size;i++){
                y[k] = nums[i];
                k++;
            }
                int s = 0;
                int m = 0;
            for(int i = 0;i<size;i++){
                if(i%2 == 0){
                    nums[i] = x[s++];
                }else{
                    nums[i] = y[m++];
                }
            }

        return nums;
    }
};