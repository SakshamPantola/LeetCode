#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool> cnt;
        int n = nums.size();
        for(int i = 0;i<nums.size();i++){
            cnt[nums[i]] = true;
        }


        int max_len = 0;
        for (auto const& [num, exists] : cnt){
            if(cnt.find(num-1) == cnt.end()){
                int currentNum = num;
                int currentStreak = 1;
            
            while (cnt.find(currentNum + 1) != cnt.end()) {
                    currentNum++;
                    currentStreak++;
                }
                max_len = max(max_len, currentStreak);
        }
    }


    return max_len;
    }
};