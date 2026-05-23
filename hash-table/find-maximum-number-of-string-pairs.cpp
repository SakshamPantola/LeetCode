class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int cnt = 0;
        for(int i = 0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                string temp = words[i];
                reverse(temp.begin(),temp.end());
                if(words[j] == temp){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};