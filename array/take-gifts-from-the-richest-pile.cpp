class Solution {
public:

    long long pickGifts(vector<int>& gifts, int k) {

        priority_queue<int>p;


        for(int i = 0;i<gifts.size();i++){
            p.push(gifts[i]);
        }

        long long ans = 0;

        while(k-- && (!p.empty())){
            int maxi = p.top();
            p.pop();
            p.push((int)sqrt(maxi));
        }

        for(int i = 0;i<gifts.size();i++){
            ans+=p.top();
            p.pop();
        }

        return ans;
        
    }
};