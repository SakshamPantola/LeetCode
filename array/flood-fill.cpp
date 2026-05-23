class Solution {
public:

    void dfs(int i,int j, int newcolor,int oldcolor,vector<vector<int>>& image){
        if(i<0 || j<0 || i>=image.size() || j>=image[0].size() || image[i][j] == newcolor || image[i][j]!= oldcolor) return;

    image[i][j] = newcolor;
    dfs(i-1,j,newcolor,oldcolor,image);//top
    dfs(i,j-1,newcolor,oldcolor,image);//left
    dfs(i+1,j,newcolor,oldcolor,image);//bottom
    dfs(i,j+1,newcolor,oldcolor,image);//right
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        dfs(sr,sc,color,image[sr][sc],image);
        return image;
    }
};