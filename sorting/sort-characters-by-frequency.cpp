class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> cnt;
        for(auto i: s){
            cnt[i]++;
        }

        vector<pair<int,char>> fq;
        int n = s.size();
        for(auto it: cnt){
        fq.push_back({it.second,it.first});
     }

     sort(fq.rbegin(),fq.rend());

     string result = "";
     for(auto x: fq){
        result.append(x.first,x.second);
     }

     return result;

    }
};