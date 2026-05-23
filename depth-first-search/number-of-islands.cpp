class Solution {
public:
        // i,j are the index where we are applying dfs
    void dfs(int i,int j,vector<vector<bool>>& vis,vector<vector<char>>& grid,int n,int m){
        if(i<0 || i>=n || j<0 || j>=m || vis[i][j] || grid[i][j]!='1') return;
        vis[i][j] = true;
        dfs(i+1,j,vis,grid,n,m); //Bottom
        dfs(i,j+1,vis,grid,n,m); //Right
        dfs(i-1,j,vis,grid,n,m); //Top
        dfs(i,j-1,vis,grid,n,m); //Left

    }
    
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()) return 0;
        int n = grid.size();
        int m = grid[0].size();
        int total_island = 0;
        vector<vector<bool>> vis(n,vector<bool>(m,false));

    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && grid[i][j]=='1'){
                dfs(i,j,vis,grid,n,m);
                total_island++;
            }
        }
    }
return total_island;
    }
};