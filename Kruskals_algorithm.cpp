#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

struct Edge{
    int u, v,weight;
    bool operator<(Edge const &other){
        return weight<other.weight;
    }
};

vector<int> parent, ranks; // renamed rank to ranks

int find_set(int v){
    if(v==parent[v])
        return v;
    return parent[v]=find_set(parent[v]);
}

void make_set(int v){
    parent[v]=v;
    ranks[v]=0; // renamed rank to ranks
}

void union_sets(int u, int v){
    int a=find_set(u);
    int b=find_set(v);
    
    if(a!=b){
        if(ranks[a]<ranks[b]) // renamed rank to ranks
            swap(a,b);
        parent[b]=a;
        if(ranks[a]==ranks[b]) // renamed rank to ranks
            ranks[a]++; // renamed rank to ranks
    }
}

int main() {
    int n, m;
    cin >> n >> m; // Input the number of vertices and edges

    vector<Edge> edges(m);

    // Read edges
for (int i = 0; i < m; i++) {
    cin >> edges[i].u >> edges[i].v >> edges[i].weight;
    edges[i].u--; // subtract 1 to make it 0-indexed
    edges[i].v--; // subtract 1 to make it 0-indexed
}


    sort(edges.begin(), edges.end());

    parent.resize(n);
    ranks.resize(n); // renamed rank to ranks
    for (int i = 0; i < n; i++)
        make_set(i);

    int cost = 0;
    vector<Edge> result;
    for (Edge e : edges) {
        if (find_set(e.u) != find_set(e.v)) {
            cost += e.weight;
            result.push_back(e);
            union_sets(e.u, e.v);
        }
    }

    cout << "Cost: " << cost << endl;
    for (Edge e : result) {
        cout << e.u << " " << e.v << " " << e.weight << endl;
    }

    return 0;
}
