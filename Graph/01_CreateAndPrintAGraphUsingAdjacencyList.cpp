#include <iostream>
#include <vector>
using namespace std;

int main(){
    int v,e;
    cin>>v>>e;
    vector<int> arr[v+1];
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
     for(int i=1;i<=v;i++){
        cout<<i<<"-->";
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
