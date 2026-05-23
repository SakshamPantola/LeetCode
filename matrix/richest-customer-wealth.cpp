class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
     int maxi = INT_MIN;
     int rows = accounts.size();
     int col = accounts[0].size();
     for(int i = 0;i<rows;i++){
        int balance=0;
        for(int j=0;j<col;j++){
            balance+=accounts[i][j];
        }
        maxi = max(maxi,balance);
     }   
     return maxi;
    }
};