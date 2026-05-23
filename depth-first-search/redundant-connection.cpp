class Solution {
public:

    bool redunconc(int src,vector<bool>& vis,vector<vector<int>>& adj,int parent){
            vis[src] = true;
            for(auto x: adj[src]){
                if(!vis[x]){
                    if(redunconc(x,vis,adj,src)){
                        return true;
                    }
                }else if(x!=parent){
                    return true;
                }
            }

            return false;
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
         int n = edges.size();
        
         vector<vector<int>> adj(n+1);

        for(int i=0;i<n;i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);

            vector<bool> vis(n+1,false);

    if(redunconc(u,vis,adj,-1)){
        return edges[i];
    }
  }


        
        return {};
    }
};