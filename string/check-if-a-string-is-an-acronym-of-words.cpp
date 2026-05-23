class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if(words.size() != s.size()){
            return false;
        }
            string acro;
        for(int i = 0;i<words.size();i++){
            acro += words[i][0];
        }

    if(acro == s){
        return true;
    }else{
        return false;
    }



    }
};