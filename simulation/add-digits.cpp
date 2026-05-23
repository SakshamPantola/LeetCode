class Solution {
    int digit(int n){
        if(n <=9){
            return n;
        }
        int ans = 0;
        int sum = 0;
        while(n!=0){
            sum = n%10;
            ans +=sum;
            n = n/10;
        }
        return digit(ans);
    }
public:
    int addDigits(int num) {
        if(num>INT_MAX){
            return 0;
        }
       int x =  digit(num);
        return x;
    }
};