class Solution {
public:
    void merge(vector<int>& nums,int st,int mid,int end){
        int n1 = mid-st+1;
        int n2 = end-mid;
        vector<int> arr1(n1);
        vector<int> arr2(n2);
        for(int i = 0;i<n1;i++){
            arr1[i] = nums[st+i];
        }
        for(int j=0;j<n2;j++){
            arr2[j] = nums[mid+j+1];
        }

        int k = st;
        int i=0;
        int j=0;
        

        while(i<n1 && j<n2){
            if(arr1[i] <= arr2[j]){
                nums[k++] = arr1[i++];
            }else{
               nums[k++] = arr2[j++];
            }
        }
            while(i<n1){
                nums[k++] = arr1[i++];
            }
            while(j<n2){
                nums[k++] = arr2[j++];

            }
    }

        void mergesort(vector<int>& nums,int st,int end){
            if(st<end){
               int mid = st+(end-st)/2;
                mergesort(nums,st,mid);
                mergesort(nums,mid+1,end);
                merge(nums,st,mid,end);
            }
        }


    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        if(n<=1) return nums;
         mergesort(nums,0,n-1);
         return nums;
    }
};