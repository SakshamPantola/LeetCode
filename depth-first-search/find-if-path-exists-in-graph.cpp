
/*
                                  BFS Way
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {


    vector<vector<int>> adj(n);

    for(auto edge: edges){
        int u = edge[0];
        int v = edge[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }      


    queue<int> q;
    vector<bool> vis(n,false);

    q.push(source);
    vis[source] = true;

    while(!q.empty()){
    int node = q.front();
    q.pop();

    if(node == destination){
        return true;
    }

    for(auto it: adj[node]){
        if(!vis[it]){
            vis[it] = true;
            q.push(it);
        }
    }
    }

return false;


    }
};
*/

//                  DFS way




class Solution {
public:

    bool dfs(int source,int destination, vector<vector<int>>& adj,vector<bool>& vis){
        if(source == destination) return true;

        vis[source] = true;
        for(int nghbr: adj[source]){
            if(!vis[nghbr]){
                if(dfs(nghbr,destination,adj,vis))
                return true;
            }
        }
        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);

    for(auto edge: edges){
        int u = edge[0];
        int v = edge[1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

        vector<bool> vis(n,false);
        return dfs(source,destination,adj,vis);

    }
};