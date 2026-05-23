
// Binary Search Way Saksham's Approach
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {

//      int n = numbers.size();

//          for(int i=0;i<n-1;i++){
//             int st=i+1;
//             int end = n-1;
//             int x = target-numbers[i];
            
//             while(st<=end){
//                 int mid = (st+end)/2;
//             if(x-numbers[mid]==0){
//                 return {i+1,mid+1};
//             }else if(x-numbers[mid]>0){
//                 st = mid+1;
//             }else{
//                 end = mid-1;
//             }
//             }

//          }
//         return{};
//     }
// };


//Normal Two Pointer Approach 
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st = 0;
        int end = numbers.size()-1;

        while(st<end){
            int sum = numbers[st]+numbers[end];
            if(sum == target)
            return {st+1,end+1};
            else if(sum>target)
            end--;
            else
            st++;
        }
    return {};
    }
};