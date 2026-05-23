class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inv) {
        vector<vector<int>> res;
        sort(inv.begin(),inv.end());
        int st1 = inv[0][0];
        int end1 = inv[0][1];
        for(int i = 1;i<inv.size();i++){
            int st2 = inv[i][0];
            int end2 = inv[i][1];
            if(end1>=st2){
                st1 = st1;
                end1 = max(end1,end2);
                continue;
            }else{
                res.push_back({st1,end1});
                st1 = st2;
                end1 = end2;
            }
        }
        res.push_back({st1,end1});
        return res;
    }
};