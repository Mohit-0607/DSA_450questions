#include <iostream>
#include <unordered_map>
using namespace std;

void solve(int arr[],int n,int k){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto i:m){
        if(i.second>(n/k))
            cout<<i.first<<" ";
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    solve(arr,n,k);
    return 0;
}
