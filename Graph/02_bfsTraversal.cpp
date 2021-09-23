#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> bfs(int v, vector<int> g[]){
    vector<int> ans;
    queue<int> q;
    q.push(0);
    vector<int> vis(v,0);
    vis[0]=1;
    while(!q.empty()){
        int t = q.front();
        q.pop();
        ans.push_back(t);
        for(auto x:g[t]){
            if(!vis[x]){
                vis[x]=1;
                q.push(x);
            }
        }
    }
    return ans;
}

int main() {
	// your code goes here
	int v,e;
	cin>>v>>e;
	vector<int> g[v+1];
	for(int i=0;i<e;i++){
	    int x,y;
	    cin>>x>>y;
	    g[x].push_back(y);
	    g[y].push_back(x);
	}
	vector<int> ans = bfs(v,g);
	for(auto x:ans){
	    cout<<x<<" ";
	}
	return 0;
}
