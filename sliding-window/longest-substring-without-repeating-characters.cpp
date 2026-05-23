class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int low = 0;
     unordered_map<char,int> hash;
     int max_win = 0;
     for(int high = 0;high<s.length();high++){
        hash[s[high]]++;

        int k = high-low+1;

        while(hash.size()< k){
            hash[s[low]]--;
            if(hash[s[low]]==0) hash.erase(s[low]);
            low++;

            k = high-low+1;       //k updation
        }
        
        max_win = max(max_win,high-low+1);
    
     }
        return max_win;
    }
};