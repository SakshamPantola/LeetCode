class Solution {
public:

    int sumofdiv(vector<int> &arr,int div){
            int sum=0;
            int n = arr.size();
        for(int i=0;i<n;i++){
         sum += (arr[i] + div - 1) / div;
           
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        
       
            int st = 1;
            int end = *max_element(nums.begin(),nums.end());

            while(st<=end){

                int mid = st+(end-st)/2;
            if(sumofdiv(nums,mid)<=threshold){
                end = mid-1;
            }else{
                st = mid+1;
            }

            }
            return st;
    }
};