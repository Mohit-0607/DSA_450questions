#include <iostream>
#include <vector>
using namespace std;

bool solve(int src,int par,vector<int>& vis,vector<int> g[]){
    vis[src]=1;
    for(auto x:g[src]){
        if(!vis[x]){
            if(solve(x,src,vis,g))
                return true;
        }
        else if(x!=par)
            return true;
    }
    return false;
}
 
bool iscyclic(int v, vector<int> g[]){
    vector<int> vis(v,0);
    for(int i=0;i<v;i++){
        if(!vis[i]){
           if(solve(i,-1,vis,g))
                return true;
        }
    }
    return false;
}
 
int main(){
    int v,e;
    cin>>v>>e;
    vector<int> g[v+1];
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bool an = iscyclic(v,g);
    cout<<an;
    return 0;
 }
