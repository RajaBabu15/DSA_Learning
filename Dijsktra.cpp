#include<bits/stdc++.h>
using namespace std;

vector<int> dijkstra(vector<vector<int>> adj_mat, int src){
    int n = adj_mat.size();
    vector<int> vis(n, 0);
    vector<int> dis(n, INT_MAX);
    vis[src] = 1;
    dis[src] = 0;
    queue<int> q;
    q.push(src);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(int i = 0; i < n; i++){
            if(vis[i] == 0&&adj_mat[node][i]!=INT_MAX && dis[i] > dis[node] + adj_mat[node][i]){
                dis[i] = dis[node] + adj_mat[node][i];
                vis[i] = 1;
                q.push(i);
            }
        }
    }
    return dis;
}

int main() {
    vector<vector<int>> adj_mat = {{INT_MAX, 4, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, 8, INT_MAX},
                                   {4, INT_MAX, 8, INT_MAX, INT_MAX, INT_MAX, INT_MAX, 11, INT_MAX},
                                   {INT_MAX, 8, INT_MAX, 7, INT_MAX, 4, INT_MAX, INT_MAX, 2},
                                   {INT_MAX, INT_MAX, 7, INT_MAX, 9, 14, INT_MAX, INT_MAX, INT_MAX},
                                   {INT_MAX, INT_MAX, INT_MAX, 9, INT_MAX, 10, INT_MAX, INT_MAX, INT_MAX},
                                   {INT_MAX, INT_MAX, 4, 14, 10, INT_MAX, 2, INT_MAX, INT_MAX},
                                   {INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, 2, INT_MAX, 1, 6},
                                   {8, 11, INT_MAX, INT_MAX, INT_MAX, INT_MAX, 1, INT_MAX, 7},
                                   {INT_MAX, INT_MAX, 2, INT_MAX, INT_MAX, INT_MAX, 6, 7, INT_MAX}};
    int src = 0;
    vector<int> dis = dijkstra(adj_mat, src);
    cout << "Vertex Distance from Source\n";
    for (int i = 0; i < dis.size(); i++)
        cout << i << "\t\t" << dis[i] << "\n";
    return 0;
}
