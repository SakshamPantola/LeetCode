class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        int n = fruits.size();
        int maxFruits = 0;
        int left = 0, sum = 0;

      
        for (int right = 0; right < n; ++right) {
            sum += fruits[right][1];

            while (left <= right && !canReach(fruits, startPos, left, right, k)) {
                sum -= fruits[left][1];
                ++left;
            }

            maxFruits = max(maxFruits, sum);
        }
        return maxFruits;
    }

    
    bool canReach(vector<vector<int>>& fruits, int startPos, int left, int right, int k) {
        int leftSteps = abs(startPos - fruits[left][0]);
        int rightSteps = abs(startPos - fruits[right][0]);
        int span = fruits[right][0] - fruits[left][0];

        
        return min(leftSteps, rightSteps) + span <= k;
    }
};