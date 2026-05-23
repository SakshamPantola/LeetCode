class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int i = 0;
        int j = 0;
        int n = firstList.size();
        int m = secondList.size();
        vector<vector<int>> res;
    while(i<n && j<m){
    int st1 = firstList[i][0];
    int end1 = firstList[i][1];
    int st2 = secondList[j][0];
    int end2 = secondList[j][1];
    int s,e;
        if(st1<=st2){
            if(end1>=st2){
                s = max(st1,st2);
                e = min(end1,end2);
                res.push_back({s,e});
            }
        }else{
            if(end2>=st1){
                s = max(st1,st2);
                e = min(end1,end2);
                res.push_back({s,e});
            }
        }

        if(end1<=end2){
            i++;
        }else{
            j++;
        }
    }

return res;
    }
};