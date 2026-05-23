class Solution {
public:

    int fun(int n){
        int sum = 0;
        while(n>0){
            int dig = n%10;
            sum+=dig*dig;
            n/=10;
        }
        return sum;
    }

    bool isHappy(int n) {

        int fast=fun(n);
        int slow = n;

        while(fast!=1 && slow!=fast){
            slow = fun(slow);
            fast = fun(fun(fast));
        }

        if(slow == fast && slow!=1) return false;

        return true;

    }
};