class Solution {
public:
    int firstUniqChar(string s) {

        int n = s.size();
        vector<int>count(26,0);

        for(int i = 0;i<n;i++){
            char ch = s[i];
            int index = ch - 'a';
            count[index]++;
        }

        for(int i = 0;i<n;i++){
            int cnt = count[s[i] - 'a'];
            if(cnt==1){
                return i;
            }
        }

        return -1;
        
    }
};