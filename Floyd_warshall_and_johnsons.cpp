
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> floydWarshall(vector<vector<int>> adj_mat){
    int n = adj_mat.size();
    vector<vector<int>> dis(n, vector<int>(n, INT_MAX));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) dis[i][j] = 0;
            else if(adj_mat[i][j] != INT_MAX) dis[i][j] = adj_mat[i][j];
        }
    }
    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(dis[i][k] != INT_MAX && dis[k][j] != INT_MAX && dis[i][k] + dis[k][j] < dis[i][j]){
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }
    return dis;
}

vector<int> bellmanFord(vector<vector<pair<int, int>>> adj_list, int src){
    int n = adj_list.size();
    vector<int> dis(n, INT_MAX);
    dis[src] = 0;
    for(int i = 0; i < n-1; i++){
        for(int u = 0; u < n; u++){
            for(auto edge : adj_list[u]){
                int v = edge.first, w = edge.second;
                if(dis[u] != INT_MAX && dis[u] + w < dis[v]){
                    dis[v] = dis[u] + w;
                }
            }
        }
    }
    return dis;
}

vector<vector<int>> johnsons(vector<vector<int>> adj_mat){
    int n = adj_mat.size();
    vector<vector<pair<int, int>>> adj_list(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(adj_mat[i][j] != INT_MAX){
                adj_list[i].push_back({j, adj_mat[i][j]});
            }
        }
    }
    vector<int> h = bellmanFord(adj_list, 0);
    for(int i = 0; i < n; i++){
        for(auto &edge : adj_list[i]){
            edge.second += h[i] - h[edge.first];
        }
    }
    vector<vector<int>> dis(n, vector<int>(n, INT_MAX));
    for(int i = 0; i < n; i++){
        dis[i] = bellmanFord(adj_list, i);
        for(int j = 0; j < n; j++){
            if(dis[i][j] != INT_MAX){
                dis[i][j] += h[j] - h[i];
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
    vector<vector<int>> dis = floydWarshall(adj_mat);
    cout << "Vertex Distance from Source (Floyd-Warshall)\n";
    for (int i = 0; i < dis.size(); i++){
        for (int j = 0; j < dis[i].size(); j++){
            cout << dis[i][j] << " ";
        }
        cout << "\n";
    }
    dis = johnsons(adj_mat);
    cout << "Vertex Distance from Source (Johnson's)\n";
    for (int i = 0; i < dis.size(); i++){
        for (int j = 0; j < dis[i].size(); j++){
            cout << dis[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
