class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int, int> mp;
        int minel = INT_MAX;

        // Count frequencies for basket1
        for (int &x : basket1) {
            mp[x]++;
            minel = min(minel, x);
        }

        // Subtract frequencies from basket2
        for (int &x : basket2) {
            mp[x]--;
            minel = min(minel, x);
        }

        vector<int> finallist;

        for (auto &it : mp) {
            int cost = it.first;
            int count = it.second;

            if (count == 0)
                continue;

            if (abs(count) % 2 != 0)
                return -1;

            for (int c = 1; c <= abs(count) / 2; c++) {
                finallist.push_back(cost);
            }
        }

        sort(begin(finallist), end(finallist));

        long long result = 0;
        for (int i = 0; i < finallist.size() / 2; i++) {
            result += min(finallist[i], minel * 2);
        }

        return result;
    }
};
// Do again after Studying Map and other which is used here:
//:-->2/Aug/2025