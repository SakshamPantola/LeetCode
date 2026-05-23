// class Solution {
// public:
//     int smallestEvenMultiple(int n) {
//         if(n<2){
//             return 2;
//         }
//         int ans = 0;

//         for(int i = 1;i<=n;i++){
//             ans = (n*i);
//             if(ans%2 == 0){
//                 return ans;
//             }
//         }
//         return ans;
//     }
// };

// 2nd way more optimized with o(1)
class Solution {
public:
    int smallestEvenMultiple(int n) {
       return (n%2 == 0)? n:n*2;
    }
};