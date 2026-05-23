class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int total = m*n;
        if(k>total) k=k%total;

        vector<vector<int>> result(m,vector<int>(n));
        for(int r = 0;r<m;r++){
            for(int c = 0;c<n;c++){
                int curr_1d = r*n+c;
                int new_1d = (curr_1d + k)%total;

                int new_r = new_1d / n;
                int new_c = new_1d % n;

                result[new_r][new_c] = grid[r][c];
            }
        }
return result;
    }
};