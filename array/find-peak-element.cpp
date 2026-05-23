// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {

//         int n = nums.size();
//         int st = 0;
//         int end = n-1;
//         while(st<=end){
//             int mid = st + (end-st)/2;
//             if(nums[mid-1]<= nums[mid] && nums[mid]>=nums[mid+1]){
//                 return mid;
//             }
//             if(nums[mid-1]<=nums[mid]){
//                 st = mid + 1;   
//             }else if(nums[mid]>=nums[mid+1]){
//                 end = mid-1;
//             }
//         }
//         return -1;
//     }
// };
// my code solve it again after learning optimizing approach; although code is correct so dont worry : solved on 2/8/2025
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int st = 0, end = nums.size() - 1;
        
        while (st < end) {
            int mid = st + (end - st) / 2;

         
            if (nums[mid] > nums[mid + 1])
                end = mid;      
            else
                st = mid + 1;  
        }
        return st;
    }
};