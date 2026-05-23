class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefMax(n), suffMin(n);

        prefMax[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefMax[i] = max(prefMax[i - 1], nums[i]);
        }

        suffMin[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffMin[i] = min(suffMin[i + 1], nums[i]);
        }

        vector<int> ans(n);

        int start = 0;

        for (int i = 0; i < n - 1; i++) {

            // split here
            if (prefMax[i] <= suffMin[i + 1]) {

                int mx = nums[start];

                for (int j = start; j <= i; j++) {
                    mx = max(mx, nums[j]);
                }

                for (int j = start; j <= i; j++) {
                    ans[j] = mx;
                }

                start = i + 1;
            }
        }

        // last segment
        int mx = nums[start];

        for (int i = start; i < n; i++) {
            mx = max(mx, nums[i]);
        }

        for (int i = start; i < n; i++) {
            ans[i] = mx;
        }

        return ans;
    }
};