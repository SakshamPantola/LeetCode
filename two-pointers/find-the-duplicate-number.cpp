class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.find(num) != seen.end()) {
                return num; // This number was seen before — it's the duplicate!
            }
            seen.insert(num); // Mark the number as seen
        }

        return -1; // Just in case — although problem guarantees a duplicate
    }
};