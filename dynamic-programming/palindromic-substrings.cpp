class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        if(n<1) return 0;
        int cnt = 0;
        for(int i = 0;i<n;i++){
            // odd checking
            int left = i;
            int right = i;
            while(left>-1 && right<=n && s[left] == s[right]){
                cnt++;
                left--;
                right++;
            }
            // even checking 
            left = i;
            right = i+1;

            while(left>-1 && right <= n && s[left] == s[right]){
                cnt++;
                left--;
                right++;
            }

        }
        return cnt;
    }
};