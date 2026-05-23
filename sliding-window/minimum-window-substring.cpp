class Solution {
public:

    int is_valid(vector<int>& have,vector<int>& need){
        for(int i = 0;i<256;i++){
            if(have[i]<need[i]){
                return 0;
            }
        }
        return 1;
    }

    string minWindow(string s, string t) {
        
        vector<int> have(256,0);
        vector<int> need(256,0);

        for(char c: t){
            need[c]++;
        }
            int low = 0, curr_len = 0, res = 0;
            int min_len = INT_MAX;
            int start = -1;
        for(int high = 0;high<s.length();high++){
            have[s[high]]++;

            while(is_valid(have,need)){

                curr_len = high-low+1;
                
                if(curr_len<min_len){
                    min_len = curr_len;
                    start = low;
                }
            have[s[low]]--;
            low++;
            }
        }

        if(start == -1) return "";
        return s.substr(start,min_len);

    }
};