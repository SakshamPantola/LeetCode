class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        
        int st = 0;
        int end = n-1;
        int first =-1;
        int last =-1;

        while(st<=end){
            int mid = st+(end-st)/2;

            if(nums[mid] == target){
                first = mid;
                end = mid -1;
            }else if(nums[mid]>target){
               end = mid - 1;
            }else {
                st = mid +1;
            }
            mid = st+(end-st)/2;
        }
       
       // Last Occurrence
       int s = 0;
       int endd = n-1;
    while(s<=endd){
        int mid = s+(endd-s)/2;
        if(nums[mid] == target){
            last = mid;
            s = mid + 1;
        }else if(nums[mid] > target){
            endd = mid -1;
        }else{
            s = mid + 1;
        }
    }

    return {first,last};        

    }
};