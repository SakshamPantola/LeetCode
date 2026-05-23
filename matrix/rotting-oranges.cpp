class Solution {
public:

    void dfs(int r,int c, int time,vector<vector<int>>& grid,vector<vector<int>>& minTime){
       int n = grid.size();
       int m = grid[0].size();
        if(r<0 || r>=n || c<0 || c>=m || grid[r][c] == 0 || minTime[r][c]<=time){
            return;
        }
        minTime[r][c] = time;
        dfs(r+1,c,time+1,grid,minTime);
        dfs(r-1,c,time+1,grid,minTime);
        dfs(r,c+1,time+1,grid,minTime);
        dfs(r,c-1,time+1,grid,minTime);
    }

    int orangesRotting(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> minTime(row, vector<int>(col, INT_MAX));
        for(int i =0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j] == 2){
                    dfs(i,j,0,grid,minTime);
                }
            }
        }
        int ans = 0;
        for(int i = 0;i<row;i++){
            for(int j = 0;j<col;j++){
                if(grid[i][j]==1){
                if(minTime[i][j] == INT_MAX) return -1;
                ans = max(ans,minTime[i][j]);
                }
            }
        }

        return ans;

    }
};
