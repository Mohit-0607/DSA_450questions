#include <iostream>
#include <unordered_set>
using namespace std;

string solve(int a1[],int a2[],int n, int m){
    unordered_set<int> s;
    int f=0;
    for(int i=0;i<n;i++) s.insert(a1[i]);
    for(int i=0;i<m;i++){
        if(s.find(a2[i])==s.end()){
            f = 1;
            break;
        }
    }
    if(f==1) return "No";
    else return "Yes";
}
int main(){
    int n,m;
    cin>>n>>m;
    int a1[n],a2[m];
    for(int i=0;i<n;i++) cin>>a1[i];
    for(int i=0;i<m;i++) cin>>a2[i];
    string ans = solve(a1,a2,n,m);
    cout<<ans;
    return 0;
}
