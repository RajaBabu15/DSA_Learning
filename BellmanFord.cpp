#include<bits/stdc++.h>
using namespace std;

vector<int> bellmanFord(vector<vector<int>> adj_mat, int src){
    int n = adj_mat.size();
    vector<int> dis(n, INT_MAX);
    dis[src] = 0;
    for(int i = 0; i < n-1; i++){
        for(int u = 0; u < n; u++){
            for(int v = 0; v < n; v++){
                if(adj_mat[u][v]!=INT_MAX && dis[u] != INT_MAX && dis[u] + adj_mat[u][v] < dis[v]){
                    dis[v] = dis[u] + adj_mat[u][v];
                }
            }
        }
    }
    for(int u = 0; u < n; u++){
        for(int v = 0; v < n; v++){
            if(adj_mat[u][v]!=INT_MAX && dis[u] != INT_MAX && dis[u] + adj_mat[u][v] < dis[v]){
                cout << "Graph contains negative weight cycle" << endl;
                return {};
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
    vector<int> dis = bellmanFord(adj_mat, src);
    cout << "Vertex Distance from Source\n";
    for (int i = 0; i < dis.size(); i++)
        cout << i << "\t\t" << dis[i] << "\n";
    return 0;
}
