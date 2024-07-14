#include<bits/stdc++.h>

using namespace std;

void bfs(vector<vector<int>> adj_lst, int start_node){
    int n=adj_lst.size();
    vector<int> vis(n,0);
    queue<int> q;
    vis[start_node]=1;
    q.push(start_node);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        for(int i=0;i<adj_lst[node].size();i++){
            if(vis[adj_lst[node][i]]!=1){ 
                vis[adj_lst[node][i]]=1;
                q.push(adj_lst[node][i]);
            }
        }
    }
}

void dfs(vector<vector<int>> adj_lst,int start_node,int vis[]){
    if(vis[start_node]==1) return;
    vis[start_node]=1;
    cout<<start_node<<" ";
    for(int i=0;i<adj_lst[start_node].size();i++){
        dfs(adj_lst,adj_lst[start_node][i],vis);
    }
}
bool checkForCycle(int node, int parent, vector<int> &vis, vector<int> adj[]) {
    vis[node] = 1;
    for(auto it : adj[node]) {
        if(!vis[it]) {
            if(checkForCycle(it, node, vis, adj)) 
                return true;
        }
        else if(it!=parent) 
            return true;
    }
    return false;
}

bool isCycle(int n, vector<int> adj[]) {
    vector<int> vis(n+1, 0); 
    for(int i = 1;i<=n;i++) {
        if(!vis[i]) {
            if(checkForCycle(i, -1, vis, adj)) 
                return true;
        }
    }
    return false;
}


int main() {
    // Assuming a graph with 5 nodes for demonstration
    vector<vector<int>> adj_lst = {{1, 2}, {0, 3}, {0, 4}, {1,4}, {2}};
    int start_node = 0;

    cout << "BFS: ";
    bfs(adj_lst, start_node);

    cout << "\nDFS: ";
    vector<int> vis(adj_lst.size(), 0);
    dfs(adj_lst, start_node, vis.data());

    return 0;
}
