#include<iostream>
#include<vector>

using namespace std;

class DisjointSet{
    vector<int> rank, parent,size;
    public:
        DisjointSet(int n){
            rank.resize(n+1,0);
            parent.resize(n+1,1);
            size.resize(n+1);
            for(int i=1;i<=n;i++){
                parent[i]=i;
            }
        }
        
        int findUltimateParent(int node){
            if(node==parent[node]) return node;
            return parent[node]=findUltimateParent[parent[node]];
        }
        
        void unionByRank(int u, int v){
            int up_u=findUltimateParent(u);
            int up_v=findUltimateParent(v);
            
            if(up_u==up_v) return;
            
            //Jiski Rank kaam hai, usko attach karte hain jiski rank jayda se
            if(rank[up_u]<rank[up_v]){
                parent[up_u]=up_v;
            }else if(rank[up_u]>rank[up_v]){
                parent[up_v]=up_u;
            }else{
                parent[up_v]=up_u;
                rank[up_u]++;
            }
        }
        
        void unionBySize(int u, int v){
            int up_u=findUltimateParent(u);
            int up_v=findUltimateParent(v);
            
            if(up_u==up_v) return;
            
            //Jiski Rank kaam hai, usko attach karte hain jiski rank jayda se
            if(size[up_u]<size[up_v]){
                parent[up_u]=up_v;
                size[up_v]+size[up_u]
            }else{
                parent[up_v]=up_u;
                size[up_u]+=size[up_v];
            }
        }
};
