class Solution {
public:


    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
          vector<vector<int>> temp;
      
        bool isInserted = false;
        int n = intervals.size();    
        for(int i = 0;i<n;i++){
            if(!isInserted && intervals[i][0] > newInterval[0]){
                temp.push_back(newInterval);
                isInserted = true;
            }
            temp.push_back(intervals[i]);
    }
    if(!isInserted){
        temp.push_back(newInterval);
    }


    //   if(intervals.size() == 0){
    //         return 0;
    //     };


    vector<vector<int>> res;

    int st1 = temp[0][0];
    int end1 = temp[0][1];

    for(int i=1;i<temp.size();i++){
        int st2 = temp[i][0];
        int end2 = temp[i][1];

    if(end1>=st2){
        st1 = st1;
        end1 = max(end1,end2);
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