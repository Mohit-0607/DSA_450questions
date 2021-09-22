#include <iostream>
using namespace std;

int main(){
    int v;
    cin>>v;
    int arr[v+1][v+1];
    for(int i=1;i<=v;i++){
        for(int j=1;j<=v;j++){
            arr[i][j]=0;
        }
    }
    for(int i=1;i<=v;i++){
        int x,y;
        cin>>x>>y;
        for(int j=1;j<=v;j++){
            arr[x][y]=1;
            arr[y][x]=1;
        }
    }
     for(int i=1;i<=v;i++){
        cout<<i<<"-->";
        for(int j=1;j<=v;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}