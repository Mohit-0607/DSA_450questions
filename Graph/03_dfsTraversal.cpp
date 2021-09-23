 #include <iostream>
 #include <vector>
 using namespace std;
 
 vector<int> ans;
 void solve(int se,vector<int> g[], vector<int>& vis){
    vis[se]=1;
    ans.push_back(se);
    for(auto x:g[se]){
        if(!vis[x]){
            solve(x,g,vis);
        }
    }
 }
 vector<int> dfs(int v, vector<int> g[]){
     vector<int> vis(v,0);
     solve(0,g,vis);
     return ans;
     
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
     vector<int> vis(v,0);
     vector<int> ans;
     ans = dfs(v,g);
     for(auto x:ans){
         cout<<x<<" ";
     }
     return 0;
 }
