class Solution {
public:
    int characterReplacement(string s, int k) {

        int high = 0,low=0;
        int res = INT_MIN;

        unordered_map<char,int> hash;
        int max_freq = 0;

        int final_win_size = 0;
        
        for(int high = 0;high<s.length();high++){

            hash[s[high]]++;
            
            max_freq = max(max_freq,hash[s[high]]);
        
            while( (high-low+1) - max_freq > k){
                hash[s[low]]--;
                low++;  
            }

            final_win_size = max(final_win_size,high-low+1);
        }
        return final_win_size;

    }
};