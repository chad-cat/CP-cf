#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<set>
#include<string>
#include<map>
#include<queue>
#include<stack>

using namespace std;
class disjoint:{
    vector<int> rank,size,parent;
    public:
    Disjointset(int n){
        rank.resize(n+1,0);
        size.resize(n+1,1);
        parent.resize(n+1);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
    }
    int findpar(){
        if(node==parent[node]) return node;
        return parent[node]=findpar(parent[node]);
    }
    void unionbyrank(int u,int v){
        int par_u=findpar(u);
        int par_v=findpar(v);
        if(rank[par_u]<rank[par_v]){
            parent[par_u]=par_v;
        }
        else if(rank[par_v]<rank[par_u]){
            parent[par_v]=par_u;
        }
        else{
            parent[par_u]=par_v;
            rank[par_v]++;
        }

    }
    void unionbysize(int u,int v){
        int par_u=findpar(u);
        int par_v=findpar(v);
        if(size[par_u]<size[par_v]){
            parent[par_u]=par_v;
            size[par_v]+=size[par_u];
        }
        else{
            parent[par_v]=par_u;
            size[par_u]+=size[par_v];
        }
    }
    
    
}
 
int main(){

}


class disjointset {
    public:
        vector<int> size,rank,parent;
    disjointset(int n){
        size.resize(n+1,1);
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=0;i<n+1;i++) parent[i]=i;
    }
    int findparent(int node){
        if(node==parent[node]) return node;
        return parent[node]=findparent(parent[node]);

    }
    void unionbysize(int u,int v){
        int par_u=findparent(u);
        int par_v=findparent(v);
        if(par_v==par_u) return;
        if(size[par_u]<size[par_v]) {
            parent[par_u]=par_v;
            size[par_v]+=size[par_u];
        }
        else{
            parent[par_v]=par_u;
            size[par_u]+=size[par_v];
        }
    }
    void unionbyrank(int u,int v){
        int par_v=findparent(v);
        int par_u=findparent(u);
        if(rank[par_v]<rank[par_u]){
            parent[par_v]=par_u;
        }
        else if(rank[par_u]<rank[par_v]){
            parent[par_u]=par_v;
        }
        else{
            parent[par_v]=par_u;
            rank[par_u]++;
        }
    }
};