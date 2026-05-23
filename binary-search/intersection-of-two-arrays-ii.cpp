class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int> intersection;
        vector<int> result;

        for(int x: nums2){
           intersection[x]++;
        }

        for(int j = 0;j<nums1.size();j++){
            if(intersection[nums1[j]]>0){
                result.push_back(nums1[j]);
                intersection[nums1[j]]--;
            }
        }
return result;
    }
};