class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
      int eve = 0,odd =0;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2!=0){
            odd++;
            }else{
                eve++;
            } 
        }

        if(eve==0 || odd==0) return true;

        int x = 0;
        for(int z:nums1){
            if(z%2 == 0){
               int curr = z;
                while(curr %2 == 0){
                    curr/=2;
                    x++;
                }
            }
        }
    return (x>=0)?true:false;
        
    }
};