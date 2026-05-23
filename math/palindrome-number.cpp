class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
        
        int temp = x;
        int ans =0;
        while(x!=0){
            if(ans>(INT_MAX/10)  ||  ans<(INT_MIN/10)){
                return 0;
            }
            int rem = x%10;
            ans = rem+ ans*10;
            x = x/10;
        }
        if(ans == temp){
            return 1;
        }
        else{
            return 0;
        }
    }
};