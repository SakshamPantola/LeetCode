#include<unordered_map>

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> needr;
        unordered_map<char,int> havem;
        
        for(int i = 0;i<ransomNote.size();i++){
            needr[ransomNote[i]-'a']++;
        }

        for(int i = 0;i<magazine.size();i++){
            havem[magazine[i]-'a']++;
        }


    for(int j = 0;j<ransomNote.size();j++){
        char ch = ransomNote[j] - 'a';
        if(needr[ch] <= havem[ch]){
            continue;
        }else{
            return false;
        }
    }

return true;
    }
};