class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        priority_queue<int>p;

        for(int i = 0;i<stones.size();i++){
            p.push(stones[i]);
        }
        int ans = 0;
        while(p.size()>1){

            int first = p.top();
            p.pop();
            int second = p.top();
            p.pop();

           if(first>second){
            p.push(first-second);
           }else if(first<second){
            p.push(second-first);
           }
       }
        return p.empty() ? 0 : p.top();
    }
};