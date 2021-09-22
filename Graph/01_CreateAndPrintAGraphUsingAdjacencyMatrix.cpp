#include <iostream>
using namespace std;

int main(){
    int v,e;
    cin>>v>>e;
    int arr[v+1][v+1];
    for(int i=1;i<=v;i++){
        for(int j=1;j<=v;j++){
            arr[i][j]=0;
        }
    }
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        arr[x][y]=1;
        arr[y][x]=1;
    } 
     for(int i=1;i<=v;i++){
        cout<<i<<"-->";
        for(int j=1;j<=v;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
