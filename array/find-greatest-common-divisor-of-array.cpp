class Solution {
public:
int getGCD(int a ,int b){
    while(b!=0){
    int reminder = a%b;
    a=b;
    b = reminder;
}
return a;
}
    int findGCD(vector<int>& nums) {
        int mini = nums[0];
        int maxi = nums[0];

        for(int i = 1;i<nums.size();i++){
            if(nums[i]<mini){
                mini = nums[i];
            }
            if(nums[i]>maxi){
                maxi = nums[i];
            }
        }
     return getGCD(mini,maxi);   
    }
};