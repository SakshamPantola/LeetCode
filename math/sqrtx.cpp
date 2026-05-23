class Solution {
public:

    long long int binarysearch(int n){
        int st=0;
        int end = n;
    long long int ans =0;
   long long int mid = st+(end-st)/2;
    while(st<=end){
       long long int sq = mid*mid;
        if(sq==n){
            return mid;
        }
        if(sq<n){
            ans = mid;
            st = mid+1;
        }else{
            end = mid-1;
        }
        mid = st+(end-st)/2;
    }
    return ans;
    }
    int mySqrt(int x) {
        return binarysearch(x);
    }
};