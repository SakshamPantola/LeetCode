class Solution {
public:
    int firstMatchingIndex(string s) {
        int mini=INT_MAX;
        int n = s.length();
        for(int i = 0;i<n;i++){
            if(s[i] == s[n-i-1]){
                mini = min(mini,i);
            }
        }
        return (mini == INT_MAX) ? -1 : mini;
    }
};