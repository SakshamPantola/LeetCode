class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int high = 0,low = 0;
        int n = fruits.size();
        int max_win = 0;
        unordered_map<int,int> hash;
        for(int high = 0;high<n;high++){
            hash[fruits[high]]++;

            while(hash.size()>2){
                hash[fruits[low]]--;
                if(hash[fruits[low]] == 0){
                    hash.erase(fruits[low]);
                }
                low++;
            }
            int len = high-low+1;
            max_win = max(len,max_win);

        }
        return max_win;
    }
};