class Solution {
public:
    int possibleStringCount(string word) {
        int pair = 1;
        for(int i = 0;i<word.length();i++){
            
                if(word[i]==word[i+1]){
                    pair++;
                }
            
        }
        return pair;
    }
};