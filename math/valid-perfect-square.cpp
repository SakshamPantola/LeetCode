class Solution {
public:
    bool isPerfectSquare(int num) {

     long long int st = 0;
     long long int end = num;
     while(st<=end){
        long long int midi = st+(end-st)/2;
        long long int mid = midi*midi;
        if(mid == num){
            return true;
        }else if(mid>num){
            end = midi - 1;
        }else{
            st = midi+1;
        }
     }
        return false;
    }
};