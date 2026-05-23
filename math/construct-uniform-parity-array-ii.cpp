class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool has_odd = false;
        int min_odd = nums1[0];
        if(nums1.size()==0) return true;
        for(auto x: nums1){
            if(min_odd>x){
                min_odd = x;
            }
            if(x%2!=0) has_odd= true;
        }

        if(has_odd!=true || min_odd%2!=0){
            return true;
        }
return false;
    }
};